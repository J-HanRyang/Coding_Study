#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int t) {
    int answer = 0;
    int i = 0;
    
    while (i < t) {
        n *= 2;
        i++;
    }
    
    return answer = n;
}