#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* letter) {
    
    char* morse[] = {
        ".-","-...","-.-.","-..",".",
        "..-.","--.","....","..",".---",
        "-.-",".-..","--","-.","---",
        ".--.","--.-",".-.","...","-",
        "..-","...-",".--","-..-","-.--","--.."
    };  

    int len = strlen(letter);
    
    char* temp = (char*)malloc(sizeof(char) * len);
    strcpy(temp, letter);

    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * len);
    
    char* token = strtok(temp, " ");
    int idx = 0;
    
    while (token != NULL) {
        for (int i=0; i<26; i++) {
            if (strcmp(token, morse[i]) == 0) {
                answer[idx] = 'a' + i;
                idx++;
                break;
            }
        }
        
        token = strtok(NULL, " ");
    }
    
    answer[idx] = '\0';
    
    return answer;
}