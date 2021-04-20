#include <stdio.h>
#include <string.h>
#define ELEMENTS	7
#define NAMELEN		10

void sort(char *v[], char tmp[])
{
	for (int step = 0; step < ELEMENTS-1; step++) {
		for(int i = 0; i < ELEMENTS-1-step; i++) {
			if(strcmp(v[i], v[i+1]) > 0) {
				strcpy(tmp, v[i]);
				strcpy(v[i], v[i+1]);
				strcpy(v[i+1], tmp);
			}
		}
	}
}




int main(void)
{
	char array[ELEMENTS][NAMELEN] = {"kim", "lee", "park", "choi", "jung", "kang", "cho"};
	char tmp[NAMELEN]; 

	//정렬 전
	for(int i = 0; i < ELEMENTS; i++) {
		printf("%s ", array[i]);
	}

	sort(*array, tmp);
	
	//정렬 후
	for(int i = 0; i < ELEMENTS; i++) {
		printf("%s ", array[i]);
	} 
	return 0;
}
