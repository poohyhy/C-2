#include <stdio.h>

//문자열로 주어진 16진수를 10진수로 바꿔주는 함수
int htoi(char s[])
{
	int n = 0, i = 0;

	while (s[i] != '\0') {
		/*주어진 문자의 ASCII코드에서 숫자일 경우 '0', 문자일 경우 'A'+10 의
		  ASCII코드 값을 뺀 뒤 자릿수만큼 16을 곱해서 변환한다.*/
		if (s[i] >= '0' && s[i] <= '9')
			n = 16 * n + (s[i] - '0');
		if (s[i] >= 'A' && s[i] <= 'F')
			n = 16 * n + (s[i] - 'A' + 10);
		i++;
	}
	return n;
}

int main(void)
{
	char h[] = "12AF";

	printf("%s\n", h);//문자열을 문자열로 출력
	printf("%x\n", htoi(h));//10진수로 변환된 h를 16진수로 출력
	printf("%d\n", htoi(h));//10진수로 변환된 h를 10진수로 출력

	return 0;
}
