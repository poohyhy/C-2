#include <stdio.h>

int main(void)
{
	double a[][5] = {{ 1.0, 6.0, 11.0, 16.0, 21.0 },
				      { 2.0, 7.0, 12.0, 17.0, 22.0 },
					  { 3.0, 8.0, 13.0, 18.0, 23.0 },
					  { 4.0, 9.0, 14.0, 19.0, 24.0 },
					  { 5.0, 10.0, 15.0, 20.0, 25.0 }};
	
	double b[8][7]; // 답을 출력할 새로운 배열 선언
	
	for(int i = 0; i < 5; i++) { //b에 a 삽입
		for(int j = 0; j < 5; j++) {
			b[i][j] = a[i][j];
		}
	}

	double rowSum, colSum, allSum = 0;

	// 행의 합과 평균 입력
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			colSum += b[j][i];
		}
		b[6][i] = colSum;
		b[7][i] = colSum / 5.0;
		colSum = 0;
	}
	
	//열의 합과 평균 입력
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			rowSum += b[i][j];
		}
		b[i][5] = rowSum;
		b[i][6] = rowSum / 5.0;
		rowSum = 0;
	}

	// 전체 합과 평균 입력
	for(int i = 0; i < 5; i++) {
		allSum += b[6][i];
	}
	b[6][5] = allSum;
	b[7][6] = allSum/25;
	
	//b 출력 (값이 0인 요소를 출력하지 않기 실패)
	for(int i = 0; i < 8; i++) {
		for(int j = 0; j < 7; j++) {
			if (i == 5) {
				break;
			}
			printf("%.2f\t", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
