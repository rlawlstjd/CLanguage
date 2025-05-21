#include <stdio.h>

int main(void){
    char str[20]; 
    char ch; 
    int i = 0;  
    ch = getchar(); // 공백문자도 가능 . 마지막 개행문자까지 
    while(ch != '\n'){
        str[i] = ch; 
        i++;
        ch = getchar();  
    }
    // gets(str) -> 계속 입력을 하면 20바이트를 넘는데도 계속 집어넣음. 즉 오버플로우 
}