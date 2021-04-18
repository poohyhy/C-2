#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
	char ch; 
	int i, j = 0; 
	char str[50];
	char a[20], b[20], op;
	int fp = 0;

	while ((ch = getchar()) != EOF) {
		str[i++] = ch; //입력되는 문자를 str문자열에 저장
		if (ch == '\n') { //개행 입력
			//입력되는 문자가 숫자이거나 '.'이면 str문자열을 연산자 앞의 수인 a문자열에 저장
			for(i = 0, j = 0; isdigit(str[i]) || str[i] == '.'; ) {
				if (str[i] == '.') //수 중간에 '.'가 있으면 fp로 소수임을 표시
					fp = 1;
				a[j++] = str[i++];
			}

			a[j] = '\0';
			
			for(; str[i] == ' '; i++); //공백 건너뛰기
			op = str[i++]; //연산자를 str문자열에 저장
			for(; str[i] == ' '; i++); //공백 건너뛰기
			
			//a문자열과 같이 b문자열 저장
			for(j = 0; isdigit(str[i]) || str[i] == '.'; ) {
				if (str[i] == '.')
					fp = 1;
				b[j++] = str[i++];
			}
			b[j] = '\0';
			
			
			switch (op) {
				case '+': //연산자가 +면 : 덧셈
					if(fp) //a b중 소수가 있으면 float형식으로 덧셈
						printf("%f\n", atof(a) + atof(b));
					else   //소수가 없으면 int형식으로 덧셈
						printf("%d\n", atoi(a) + atoi(b));
					break;
				case '-': //연산자가 -면 : 뺄셈
					if(fp)
						printf("%f\n", atof(a) - atof(b));
					else
						printf("%d\n", atoi(a) - atoi(b));
					break;
				case '*': //연산자가 *면 : 곱셈
					if(fp)
						printf("%f\n", atof(a) * atof(b));
					else
						printf("%d\n", atoi(a) * atoi(b));
					break;
				case '/': //연산자가 /면 : 나눗셈의 몫
					if(fp)
						printf("%f\n", atof(a) / atof(b));
					else 
						printf("%d\n", atoi(a) / atoi(b));
					break;
				case '%': //연산자가 %면 : 나눗셈의 나머지
						printf("%d\n", atoi(a) % atoi(b));

			}
			i = 0; fp = 0; //다음 연산을 위해 문자열 인덱스와 소수 표시 초기화
		}
	}
	return 0;
}  
