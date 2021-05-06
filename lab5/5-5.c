#include <stdio.h>

static char daytab[2][13] = {
	{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int DOY(int year, int month, int day)
{
	int i, leap;

	leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
	for(i = 1; i < month; i++) {
		day += daytab[leap][i];
	}
	return day;
}

void MD(int year, int yearday, int *pmonth, int *pday)
{
	int i, leap;

	leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
	for(i = 1; yearday > daytab[leap][i]; i++)
		yearday -= daytab[leap][i];
	*pmonth = i;
	*pday = yearday;
}

int main(void)
{
	int pmonth[1];
	int pday[1];

	printf("2021년 4월 30일은 %d 번째 날입니다.\n", DOY(2021, 4, 30));
	printf("2014년 4월 16일은 %d 번째 날입니다.\n", DOY(2014, 4, 16));
	
	MD(2021, 200, pmonth, pday);
	printf("2021년 200일째는 %d 월 %d 일입니다.\n", pmonth[0], pday[0]);
	MD(2000, 300, pmonth, pday);
	printf("2000년 300일째는 %d 월 %d 일입니다.\n", pmonth[0], pday[0]);

	return 0;
}

