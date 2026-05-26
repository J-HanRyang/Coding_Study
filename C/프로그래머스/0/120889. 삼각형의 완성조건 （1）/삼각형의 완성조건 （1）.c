#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    int answer = 0;
    
    qsort(sides, sides_len, sizeof(int), compare);
    if (sides[0] + sides[1] > sides[2]) answer = 1;
    else answer = 2;
    
    return answer;
}