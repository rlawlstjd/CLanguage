#include <stdio.h>
#include <string.h>
int main(void){
    char str1[20] = "strawberry"; 
    
    // str1[0] = 'a'; 
    // str1[1] = 'p'; 
    // str1[2] = 'p'; 
    // str1[3] = 'l'; 
    // str1[4] = 'e'; 
    // str1[5] = '\0';
    // 이렇게 중간에서 바꿔주면 마지막에 널 문자를 찍어줘야 그 다음 문자가 안적힘. 
    
    // strcpy 는 덮어씌워버림. 
    strcpy(str1, "bananan"); // 바구려면 무조건 이렇게 써야함. 자바처럼 안됨. 

    //printf("%s", str1); 

    char str2[20] = "apple"; 
    char *ps1 = "banana"; 
    char *ps2 = str1; 
    strcpy(ps2, ps1);
    
    printf("%s\n", str1); 

}