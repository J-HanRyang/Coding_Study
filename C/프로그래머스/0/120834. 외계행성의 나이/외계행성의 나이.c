#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int age) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(int) * 4);
    
    int temp = age;
    int len = 0;

    // 자릿수 구하기
    while (temp != 0) {
        temp /= 10;
        len++;
    }

    // 뒤에서부터 채우기
    for (int i = len - 1; i >= 0; i--) {
        int a = age % 10;
        answer[i] = 'a' + a;
        age /= 10;
    }

    answer[len] = '\0';
    
    return answer;
}