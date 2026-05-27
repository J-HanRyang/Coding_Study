#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int balls, int share) {
    int answer = 0;
    
    long long result = 1;
    
    for (int i = 1; i <= share; i++) {
        result = result * (balls - share + i) / i;
    }
    
    answer = result;
    
    return answer;
}