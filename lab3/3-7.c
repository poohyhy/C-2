#include <stdio.h>

long factorial(int n) //20!정도의 큰 수는 int가 아닌 long 사용
{
	//n! = n*(n-1)!이므로 이를 순환적으로 호출하고 n==1이되면 1을 return하고 순환을 종료
	if(n <= 1) return 1;
	else return (n * factorial(n-1));
}

int main(void)
{
	//1!~20!출력, 큰 수 출력 위해 서식문자 %lu사용
	for(int i = 1; i <= 20; i++) {
		printf("%d!\t=\t%lu\n", i, factorial(i));
	}
	return 0;
}

