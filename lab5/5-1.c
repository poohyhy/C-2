#include <stdio.h>

int main(void)
{
	int a[] = {1, 2, 3, 4, 5};
	int *p = a; //배열의 첫번째 인덱스(이름)을 가리키는 포인터 변수 p
	int i;

	// printf with a[i] and for()
	// a[]를 a[0]부터 a[4]까지 순차적으로 접근
	for(int i; i < 5; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	// printf with p and while()
	// 포인터 변수 p의 내용에 접근, p를 1씩 증가시키며 각 원소에 접근
	while(p <= a + (sizeof(a)/sizeof(int) - 1)) {
		printf("%d ", *p++);
	}

	return 0;
}
