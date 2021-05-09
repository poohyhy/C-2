#include <stdio.h>

// 윤년과 평년의 월별 일 수
static char daytab[2][13] = {
	{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int DOY(int year, int month, int day)
{
	int i, leap;

	leap = year%4 == 0 && year%100 != 0 || year%400 == 0; // 윤년일 경우 1, 아닐경우 0
	for(i = 1; i < month; i++) { // 주어진 day에 1월부터 month 전까지 달의 일수를 더함
		day += daytab[leap][i];
	}
	return day;
}

void MD(int year, int yearday, int *pmonth, int *pday)
{
	int i, leap;

	leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
	for(i = 1; yearday > daytab[leap][i]; i++) // 주어진 yearday에 1월부터의 일수를 순차적으로 뺌
		yearday -= daytab[leap][i];
	*pmonth = i;
	*pday = yearday;
}

int main(void)
{
	int month;
	int day;

	printf("2021년 4월 30일은 %d 번째 날입니다.\n", DOY(2021, 4, 30));
	printf("2014년 4월 16일은 %d 번째 날입니다.\n", DOY(2014, 4, 16));
	
	MD(2021, 200, &month, &day);
	printf("2021년 200일째는 %d 월 %d 일입니다.\n", month, day);
	MD(2000, 300, &month, &day);
	printf("2000년 300일째는 %d 월 %d 일입니다.\n", month, day);

	return 0;
}

