#include <stdio.h>

int main(void)
{
	int i = 0;
	char a[] = "Hello, world!";
	while(a[i] != '\0') {
		putchar(a[i]);
		i++;
	}
	return 0;
}
