#include <stdio.h>
#include <math.h>

int main(void)
{	
	//double타입의 변수 i 가 1에서부터 시작해서 매 반복마다 1씩 증가하며 i<=10일때까지 반복
	for (double i=1; i<=10; i++) {
		//출력내용 : SQRT (i(소숫점 한자리까지, 실수형)) = sqrt(i)의 계산결과(실수형) 
		printf("SQRT (%.1f) = %f\n", i, sqrt(i));
	}
	return 0;
}
