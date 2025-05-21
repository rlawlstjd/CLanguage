#include <stdio.h>
#include <string.h>

void my_strcat(char *dp, char*sp){
    while (*dp != '\0') dp++; 
    while (*sp != '\0') {
        *dp = *sp; 
        dp++; 
        sp++; 
    }
    *dp = '\0'; 
}

int main(void){
    char str[20] = "mango tree"; 

    //strcpy(str, "aaple");   마지막에 널 문자를 붙임. 
    strncpy(str, "apple-pie", 5); // -> ncpy 는 마지막에 널문자를 붙이지 않음. 
    
    printf("%s\n", str); 


    char str1[20] = "apple";
    // strcat
    strcat(str1, "pie"); // -> 널문자 위치를 찾고 그 위치부터 붙여넣음. 그 후 마지막에 널 문자 붙임. 
    printf("%s\n", str1); 

    my_strcat(str1, "pie"); 

    //strncat -> 붙여넣기 할 개수  -> 앞 세개 까지만 (널문자 붙여줌)
    strncat(str1, "place", 3); 
    printf("%s\n", str1); 

    //strleng -> 입력된 문자열의 길이 
    char str3[20] = "banana"; 
    int len; 
    len = strlen(str3); 
    printf("%d\n", len); 
}