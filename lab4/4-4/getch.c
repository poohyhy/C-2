#include <stdio.h>
#define BUFSIZE	100

char buf[BUFSIZE];
int bufp = 0;

//버퍼에 뭔가 있으면 버퍼에서 반환, 아니면 getchar()해서 반환
int getch(void)
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}

//버퍼가 다 차면 오류 출력
void ungetch(int c)
{
	if (bufp >= BUFSIZE)
		printf("ungetch: too many characters\n");
	else buf[bufp++] = c;
}

