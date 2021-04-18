// celsius to fahrenheit transformation
// range of celsius is : -20, -15, ... , 40

#include <stdio.h>

int main(void)
{
	int celsius;
	double fahr;
	int lower, upper, step;

	lower = -20;
	upper = 40;
	step = 5;
	//from -20 to 40, increases 5 per step 

	celsius = lower;
	//set celsius to -20

	printf("Celsius\tFahrenheit\n");

	while (celsius <= upper) {
		fahr = (celsius * 9/5) + 32;
		printf("%3d\t%5.1f\n", celsius, fahr);
		//celsius는 3칸 띄우고 오른쪽 정렬, fahr는 5칸 띄우로 오른쪽 정렬
		celsius += step;
	}
	return 0;
}
