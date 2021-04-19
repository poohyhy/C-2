#include <string.h>
#include <stdio.h>

//주어진 문자 배열을 거꾸로 만드는 함수
void reverse(char s[]) {
  int c, i, j;

  for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
    c = s[i];
    s[i] = s[j];
    s[j] = c;
  }
}

int main(void) {
  char ch, input[100];
  int j;
  while((ch = getchar()) != EOF) { //^D 입력까지 프로그램 실행
    if (ch == '\n') { //개행이 입력되면, 즉 문자열을 다 입력했으면
      input[j] = '\0'; //문자열의 끝을 알리는 null문자
	  j = 0; //입력 인덱스 초기화
	  printf("%s", input); //기존 문자열 출력
	  printf("\n"); //개행
      reverse(input); //문자 배열을 거꾸로
	  printf("%s",input); //처리된 문자열 출력
      printf("\n");
    }
    else { //개행되기 전이면(아직 문자열을 입력중이면) 문자 배열에 문자를 저
      input[j] = ch;
      j++;
    }
  }
  return 0;
}
