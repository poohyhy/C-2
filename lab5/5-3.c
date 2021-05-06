#include <stdio.h>
#include <string.h>

int mystrlen(char *s) {
	int count = 0;	// 문자열의 길이
	while(*s != '\0'){	// null문자가 나올때까지 반복
		// 문자열의 길이 1 증가, s를 다음 인덱스로
		count++;
		s++;
	}
	return count;
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
	printf("with mystrlen()\n");
	for(int i = 0; i < n; i++)
		printf("%s %d\n", *(s+i), (int)mystrlen(s[i]));
	return 0;
}
