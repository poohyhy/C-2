#include <stdio.h>

#define IN 1
#define OUT 0
//getchar 중 문자가 있으면 1, 공백이면 0

int main(void)
{
	char ch;
	int state = IN;

	printf("Input some characters, then press Ctrl+D\n");
	
	//End Of File까지 char를 읽어서 단어를 분리하는 반복문
	while ((ch = getchar()) != EOF) {
		if (ch == ' ' || ch == '\n' || ch == '\t') {
			state = OUT;
			//getchar 중 공백을 만나면 state가 OUT으로.
		}
		else if (state == OUT) {
			state = IN;
			printf("\n");
			putchar(ch);
			//공백 후에 char가 오면 개행하고 putchar
		}
		else {
			putchar(ch);
			//state가 1이고 공백을 만나지 않으면 putchar
		}
	}
	return 0;
}
