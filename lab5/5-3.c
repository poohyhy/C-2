#include <stdio.h>
#include <string.h>

int mystrlen(char *s) {
	
}

int main(void)
{
	char *s[] = {"This is Lab5", "Easy C Programming", "Have fun"};

	printf("with strlen()\n");
	int n = (int)(sizeof(s)/sizeof(char *));
	for(int i = 0; i < n; i++)
		printf("%s %d\n", *(s+i), (int)strlen(s[i]));
	putchar('\n');

	//printf string s and string length using mystrlen() with for loop

	return 0;
}
