#include <stdio.h>

int max(int i, int j, int k)
{
	//최댓값을 처음 주어진 매개변수의 인자로 초기화
	int Max = i;
	
	//뒤의 인자와 비교하여 더 큰 수를 최댓값에 대입
	if (Max < j)
		Max = j;
	if (Max < k)
		Max = k;
	
	//최댓값 반환
	return Max;
}

int min(int i, int j, int k)
{
	//최솟값을 처음 주어진 인자로 초기화
	int Min = i;
	
	//뒤의 인자와 비교하여 더 작은 수를 최솟값에 대입
	if (Min > j)
		Min = j;
	if (Min > k)
		Min = k;
	
	//최솟값 반환
	return Min;
}

int main(void)
{
	int i = 10;
	int j = 20;
	int k = -30;
	
	printf("Min value is %d\n", min(i, j, k));
	printf("Max value is %d\n", max(i, j, k));

	return 0;
}
