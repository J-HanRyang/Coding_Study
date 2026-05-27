#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num, int k) {
    int answer = 0;
    
    char nums[7];
    sprintf(nums, "%d", num);
    
    char target = k + '0';
    for (int i=0; nums[i] != '\0'; i++) {
        if (nums[i] == target) {
            answer = i+1;
            break;
        }
        else answer = -1;
    }
    
    return answer;
}