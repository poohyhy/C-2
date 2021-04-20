#include <stdio.h>

int main(void)
{
	int answer = 0;
	int i, j;
	for(i = 0; i < 1000; i++) {
		j = 1000 - i; // 1000에서 시작해 1씩 감소시키며 검사
		if(j % 6 == 1 && j % 8 == 5 && j % 13 == 10) {
			answer = j; // 수가 문제에 주어진 조건을 만족하면 answer에 저장하고 loop 종료
			break;
		}
	}
	printf("answer : %d\n", answer); // 정답 출력
	return 0;
}

