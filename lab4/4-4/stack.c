#include <stdio.h>
#include "calc.h"

#define MAXVAL	100

int sp = 0;
double val[MAXVAL];

//값을 스택에 push하고 stack pointer 증가, 스택의 크기를 초과하면 오류 출력
void push(double f)
{
	if (sp < MAXVAL)
		val[sp++] = f;
	else
		printf("error: stack full, can't push %g\n", f);
}

//스택에서 값을 pop하고 stack pointer 감소, 스택이 비어있으면 오류 출력
double pop(void)
{
	if (sp > 0)
		return val[--sp];
	else {
		printf("error: stack empty\n");
		return 0.0;
	}
}
