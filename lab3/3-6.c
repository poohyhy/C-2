#include <stdio.h>

int main(void)
{
	int i;
	int prime = 1; //소수 여부는 처음에 1로 초기화

	for(i = 1; i <= 200; i++) {
		prime = 1; //한 수의 소수 여부를 판단했으면 prime를 다시 1로 초기화
		for(int j = 2; j < i; j++) 
		//i보다 작은 j를 i에서 나눈 나머지가 0이면 prime을 0으로 하고 내부 루프  탈출
			if(i % j == 0) {
				prime = 0;
				break;
			}
		if(prime == 1) //prime가 1이면 소수이므로 출력
			printf("%d ",i);
	}

	
	return 0;
}
