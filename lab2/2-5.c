#include <stdio.h>
#include <limits.h>

int main(void)
{
	//signed 자료형들의 최솟값, 최댓값
	printf("%d %d\n", CHAR_MIN, CHAR_MAX);
	printf("%d %d\n", SHRT_MIN, SHRT_MAX);
	printf("%d %d\n", INT_MIN, INT_MAX);
	printf("%ld %ld\n", LONG_MIN, LONG_MAX);//long은 서식문자 %d보다 넓은 범위를 가지므로 %ld사용
	//unsigned 자료형들의 최솟값, 최댓값
	printf("0  %d\n", UCHAR_MAX);
	printf("0  %d\n", USHRT_MAX);
	printf("0  %u\n", UINT_MAX);
	printf("0  %lu\n", ULONG_MAX);
	/*unsigned int와 unsigned long은 서식문자 %d보다 넓은 범위를 가지므로 
	  %d와 %ld의 두배의 범위를 가지는%u와 %lu 사용*/
	return 0;
}
