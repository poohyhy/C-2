#include <stdio.h>
#include <string.h>

/* bubble 정렬을 통해 문자열을 정렬한다.
   인접한 두 요소의 사전상 순서를 strcmp로 비교해 정렬하고 배열의 끝까지 반복한다.
   이렇게 하면 사전상 가장 뒤에 있는 단어가 가장 오른쪽으로 가게 된다.
   이후 가장 오른쪽의 요소를 제외하고 반복한다. */
void bubbleSort(char *arr[], int index_R)
{
	char *tmp;
	for (int i = index_R; i > 0; i--) {
		for (int j = 1; j < index_R; j++) { //argv[0][]는 명령어이므로 1부터 정렬 시작
			if (strcmp(arr[j], arr[j + 1]) > 0) {
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}

int main(int argc, char *argv[]) {

	bubbleSort(argv, argc-1);

	for (int i = 1; i < argc; i++) //argv[0][]는 명령어이므로 1부터 출력 시작
		printf("%s\n", argv[i]);

	return 0;
}
