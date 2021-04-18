#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for(int i = 0; i < 4; i++) {
		//rand()로 생성된 수를 10으로 나눈 몫을 구해서 한자리 random number 생성
		printf("%3d", rand() % 10);
	}
	printf("\n");

	return 0;
}
