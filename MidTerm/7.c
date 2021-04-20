#include <stdio.h>
#define	MAX_SIZE 100

int main(void)
{
	// input, 소수를 저장할 배열, 배열의 마지막 index
	int num;
	int count = -1;
	int arr[MAX_SIZE];

	printf("Input Integer: ");
	scanf("%d", &num); // 정수 입력
	
	// num을 나누어 떨어지게 하는 소수 i를 찾고 arr에 저장, num에는 num/i을 저장하고 반복
	for(int i = 2; i <= num; i++) { 
		while(num % i == 0) {
			arr[++count] = i;
			num /= i;
		}
	}
	
	// arr에 저장된 소수들을 출력하고 배열의 마지막 원소 뒤에는 *를 출력하지 않음
	for(int i=0; i < count+1; i++) {
		printf("%d", arr[i]);
		if(i < count) {
			printf(" * ");
		}
	}
	return 0;
}

