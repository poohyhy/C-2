#include <stdio.h>

int main(void)
{
	printf("정수 두 개 a, b를 순서대로 입력하시오.\n");
	
	//int타입 변수 a, b를 선언하고 정수를 입력받음
	int a, b;
	scanf("%d %d", &a, &b);
	printf("a : %d b : %d\n", a, b);

	//만약 a가 b보다 크면 a-b 출력
	if (a > b)
		printf("%d - %d = %d\n", a, b, a-b);
	
	//만약 b가 a보다 크거나 같으면 b-a 출력
	else
		printf("%d - %d = %d\n", b, a, b-a);
	
	return 0;
}
