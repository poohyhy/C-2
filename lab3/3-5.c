#include <stdio.h>

int main(void) 
{
	int a, b; //두 정수 a, b 선언

	printf("Enter two Integers : ");
	scanf("%d %d", &a, &b); //a, b 입력받음

	for(int j = 1; j <= a; j++) //둘 중의 한 수보다 작은 j로 나눈 나머지가 둘다 0이면 공약수
		if(a % j == 0 && b % j == 0)
			printf("%d ", j); //공약수를 출력

	printf("\n");
	return 0;
}
