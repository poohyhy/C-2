#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	// command line arg에 -r이 주어지면 입력 순서의 반대로 출력
	if(strcmp(argv[1], "-r") == 0) {
		for(int i = 1; i < argc-1; i++)
			printf("%s%s", argv[argc-i], (i < argc-2) ? " " : "");
	}
	// 아니면 입력 순서대로 출력
	else {
		for(int i = 1; i < argc; i++)
			printf("%s%s", argv[i], (i < argc-1) ? " " : "");
	}
	printf("\n");
	return 0;
}
