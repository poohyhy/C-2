#include <stdio.h>

void b(int *p)
{
	printf("%d %d %d\n", p[0], p[-1], p[-2]);
	return;
}

int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	int n = (int)(sizeof(a)/sizeof(int)); // 배열 a의 길이 n
	for(int i = 0; i < n; i++) // a 출력
		printf("%d ", a[i]);
	putchar('\n');

	b(a+n-1); // 배열 a의 마지막 인덱스를 가리키는 포인터
	
	return 0;
}
