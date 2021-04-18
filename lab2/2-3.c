#include <stdio.h>

int main(void)
{
	int i = 65;

	printf("%d\n", i);
	printf("%o\n", i);
	printf("%X\n", i);
	printf("%c\n", i);
	printf("%f\n", (double)i);
	printf("%e\n", (double)i);
	printf("%g\n", (double)i);
	//아래의 3 printf문만 i를 double타입으로 형변환 해 주었음.
	return 0;
}
