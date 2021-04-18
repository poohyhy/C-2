#include <stdio.h>
#include <string.h>
#define MAX_COUNT 5

int main(void)
{
	int step, i;
    const char *p_temp_str;
    const char *p_str_list[MAX_COUNT] ={
        "kim", "choi", "park", "lee"
    };

    for(i = 0; i < MAX_COUNT; i++) {
        printf("%s", p_str_list[i]);
    }

    printf("\n");
    for(step = 0; step < MAX_COUNT - 1; step++) {
        for(i = 0; i < MAX_COUNT-1-step; i++) {
            if(strcmp(p_str_list[i], p_str_list[i+1]) > 0) {
                p_temp_str = p_str_list[i];
                p_str_list[i] = p_str_list[i + 1];
                p_str_list[i + 1] = p_temp_str;
            }
        }
    }
    for(i = 0; i < MAX_COUNT; i++) {
        printf("%s\n", p_str_list[i]);
    }
    

	return 0;
}
