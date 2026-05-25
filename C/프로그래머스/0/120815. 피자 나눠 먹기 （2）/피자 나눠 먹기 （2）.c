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

// 최대공배수 함수
int lcm (int a, int b) {
    return a / gcd(a, b) * b;
}

int solution(int n) {
    int answer = 0;
    answer = lcm(n, 6) / 6;
    return answer;
}