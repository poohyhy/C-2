#include <stdio.h>

double sum(double arr[]) {
	double sum = 0;
	for(int i = 0; i < 5; i++) {
		sum += arr[i];
	}
	return sum;
}

int main(void)
{
	double a[][5] = {{ 1.0, 6.0, 11.0, 16.0, 21.0 },
				      { 2.0, 7.0, 12.0, 17.0, 22.0 },
					  { 3.0, 8.0, 13.0, 18.0, 23.0 },
					  { 4.0, 9.0, 14.0, 19.0, 24.0 },
					  { 5.0, 10.0, 15.0, 20.0, 25.0 }};

	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			printf("%.2f\t", a[i][j]);
		}
		printf("%.2f\t%.2f", sum(a[i]), sum(a[i])/5);
		printf("\n");
	}
	
	printf("\n");

	double allsum, colsum = 0.0;
	
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			colsum += a[j][i];
			allsum += a[j][i];
		}
		printf("%.2f\t", colsum);
		colsum = 0.0;
	}
	printf("%.2f\n", allsum);


	return 0;
}
