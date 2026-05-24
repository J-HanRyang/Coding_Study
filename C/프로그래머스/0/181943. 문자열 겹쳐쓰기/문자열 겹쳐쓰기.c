#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, const char* overwrite_string, int s) {
    int len = strlen(my_string);
    char* answer = (char*)malloc(len + 1);
    strcpy(answer, my_string);

    for (int i = 0; overwrite_string[i] != '\0'; i++) {
        answer[s + i] = overwrite_string[i];
    }

    return answer;
}
