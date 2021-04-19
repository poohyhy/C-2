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
  int i, j;
  while((ch = getchar()) != EOF) { //^D 입력까지 프로그램 실행
    if (ch == '\n') { //개행이 입력되면, 즉 문자열을 다 입력했으면
      j = 0;
      while (input[i] != '\0') { //null문자가 나올때까지 문자 배열을 출력
        printf("%c", input[i]); // 오답, putchar()를 사용하거나 printf("%s")를 사용했어야 했다. 물론 int i도 필요없었다.
        i++;
      }
      i = 0;
      printf("\n");
      reverse(input); //문자 배열을 거꾸로
      while (input[i] != '\0') { //null문자가 나올때까지 문자 배열을 출력
        printf("%c",input[i]);
        i++;
      } 
      i = 0;
      printf("\n");
    }
    else { //개행되기 전이면(아직 문자열을 입력중이면) 문자 배열에 문자를 저
      input[j] = ch;
      j++;
    }
  }
  return 0;
}
