#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {

    qsort(array, array_len, sizeof(int), compare);

    int answer = array[0];  // 최빈값
    int maxCount = 1;       // 최대 등장 횟수
    int count = 1;          // 현재 숫자 등장 횟수
    int duplicated = 0;     // 최빈값 중복 여부

    for (int i = 1; i < array_len; i++) {
        if (array[i] == array[i-1]) count++;
        else count = 1;

        if (count > maxCount) {
            maxCount = count;
            answer = array[i];
            duplicated = 0;
        }
        else if (count == maxCount && answer != array[i]) duplicated = 1;
    }

    if (duplicated) return -1;

    return answer;
}