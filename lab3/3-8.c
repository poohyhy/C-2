#include <stdio.h>

int main(void)
{
	for (int i = 33; i < 127; ++i) {
		//3자리 정수를 오른쪽 정렬하기 위해 %3d사용, 16진수를 대문자로 출력하기 위해 %X사용
		//6set를 한 줄에 출력하고 개행함
		printf("%3d %X %c\t", i, i, i);
		printf("%3d %X %c\t", i, i, i);
		printf("%3d %X %c\t", i, i, i);
		printf("%3d %X %c\t", i, i, i);
		printf("%3d %X %c\t", i, i, i);
		printf("%3d %X %c\n", i, i, i);
	}
	return 0;
}
