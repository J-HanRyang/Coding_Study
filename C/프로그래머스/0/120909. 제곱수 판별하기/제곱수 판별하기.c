#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int i = 0;
    
    while (i*i <= n) {
        if (i*i == n) return answer = 1;
        else i++;
    }
    
    return answer = 2;
}