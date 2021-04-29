#include <stdio.h>

int main(void)
{
	int a[] = {1, 2, 3, 4, 5};
	int *p = a;
	int i;

	// printf with a[i] and for()
	for(int i; i < 5; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	// printf with p and while()
	int j = 0;
	while(j < 5) {
		printf("%d ", *(p+j));
		j++;
	}

	return 0;
}
