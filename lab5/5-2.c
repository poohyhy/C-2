#include <stdio.h>

int main(void)
{
	// 2차원 배열 a[][3]
	int a[][3] = {{1, 2, 3},
					{4, 5, 6},
					{7, 8, 9}};
	
	// 배열을 가리키는 포인터 (2차원 배열) 선언하고 2차원 배열 a로 초기화
	int *pa[] = {a[0], a[1], a[2]};

	// a[0][0]를 가리키는 포인터
	int *p = a[0];

	int i;

	// 
	for(i = 0; i < 3; i++)
		printf("%d %d %d\n", a[i][2-i], *a[i], *(*(a+i)+i));
	putchar('\n');

	for(i = 0; i < 3; i++)
		printf("%d %d\n", *pa[i], p[i]);
	putchar('\n');

	return 0;
}
