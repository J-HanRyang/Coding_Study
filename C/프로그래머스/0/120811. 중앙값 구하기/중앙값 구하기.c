#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 비교 함수
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int answer = 0;
    
    // 정렬
    qsort(array, array_len, sizeof(int), compare);
    
    // 중앙값
    answer = array[array_len/2];
    
    return answer;
}