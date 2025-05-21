#include <stdio.h>
#include <string.h>

char* my_strcoy(char *dp, char *sp){
    char *po = dp; 
    while(*sp != '\0'){
        *dp = *sp; 
        sp++; 
        dp++; 
    }
    *dp = "\0"; 
    return po; 
}

int main(void){
    char str[80]; 

    my_strcpy(str, "apple"); 
}

// char * strcpy(char *dp, const char *sp) 
// -> 바꾼 값의 그 위치값을 반환함. 복사된것을 바로 출력할 수 있음 or 다른 문자열 연산 함수에 인수로 줄 수 있음