#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 최대공약수 함수
int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int* solution(int numer1, int denom1, int numer2, int denom2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * 2);
    
    // 분수 덧셈
    int numer = (numer1 * denom2) + (numer2 * denom1);
    int denom = denom1 * denom2;
    
    // 최대공약수
    int g = gcd(numer, denom);
    
    answer[0] = numer / g;
    answer[1] = denom / g;
    
    return answer;
}