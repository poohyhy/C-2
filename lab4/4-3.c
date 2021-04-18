#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	//rand()함수의 Seed값에 시간에 따라 항상 변하는 time()를 전달하여 난수 생성
	srand((unsigned int)time(NULL));

	for(int i = 0; i < 4; i++) {
		printf("%3d", rand() % 10);
	}
	printf("\n");

	return 0;
}

