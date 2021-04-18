#include <stdio.h>
int i = 10; //전역변수 i 선언하고 10으로 초기화


void f(void)
{
	int i = 1; //지역변수 i 선언하고 1로 초기화
	printf("i in f() is %d\n", i++); // i를 출력하고 i에1을 더함
}

void s(void)
{
	//지역변수 i 선언하고 100으로 초기화, static이기때문에 다시 이 함수를 호출할때 초기화 하지 않음.
	static int i = 100; 
	printf("i in s() is %d\n", i++); // i를 출력하고 i에 1을 더함
}

int main(void)
{
	for (int j = 0; j < 3; ++j) {
		printf("i in main() is %d\n", i++);
		f();
		s();
	}
	/* 위 반복문은 
	   1. 전역변수 i 출력하고 1을 더함
	   2. f()함수 실행
	   3. s()함수 실행
	   이 과정을 3번 반복한다. 이때, f()함수는 호출될때마다 지역변수인 i를 초기화하기에 
	   값이 변하지 않고 계속 1이 출력되지만,
	   전역변수 i는 반복문 내에서 초기화를 하지 않기때문에 더한 값이 보전되고,
	   s()함수는 i를 static 변수로 선언했기에 호출할때마다 초기화하지 않고 더한 값이 보전된다.
	   */
	return 0;
}

