#include <stdio.h>
#include <ctype.h>
#include "calc.h"

int getop(char s[])
{
	int i, c;

	//계산할 수나 연산자를 입력받는다
	while ((s[0] = c = getch()) == ' ' || c == '\t')
		;//처음 입력되는 빈칸, 탭 무시
	s[1] = '\0';
	if (!isdigit(c) && c != '.')
		return c; //연산자 입력
	i = 0;
	if (isdigit(c))
		while (isdigit(s[++i] = c = getch()))
			; //수 입력
	if (c == '.')
		while (isdigit(s[++i] = c = getch()))
			; //소숫점 아래 수 입력
	s[i] = '\0';

	if(c != EOF)
		ungetch(c);
	return NUMBER;
}
