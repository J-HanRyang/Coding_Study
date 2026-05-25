#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare (const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    
    qsort(numbers, numbers_len, sizeof(int), compare);
    answer = numbers[numbers_len-1] * numbers[numbers_len-2];
    
    return answer;
}