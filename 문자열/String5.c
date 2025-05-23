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

int my_strlen(char *sp){
    int cnt = 0; 
    while(*sp != '\0'){
        cnt++; 
        sp++; 
    }
    return cnt; 
}

int my_strcmp(char *sp1, char *sp2){
    while(*sp1 == *sp2 && *sp1 !='\0'){
        sp1++; 
        sp2++; 
    }
    if(*sp1 > *sp2){
        return 1; 
    } else if(*sp1 < *sp2){
        return -1;
    } else{
        return 0; 
    }
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
    // sizeof는 배열 전체의 길이 . 
    char str3[20] = "banana"; 
    int len; 
    len = strlen(str3); 
    printf("%d\n", len); 

    
    //strcmp 사전에 나오는 순서 확인 
    // 사전 뒤에 있을수록 아스키 코드값이 큼  뒤에값이 더 크면 -1 앞 1
    char str4[20] = "peer"; 
    char str5[20] = "peach"; 

    strcmp(str4, str5 ); 
    // str > str2 1 , str < str2 -1, str1 = str2 다음 문자로 넘어가서 다시 비교 

    // 3자리까지만 비교함. pear, peach -> 같기때문에 0 반환 
    strncmp(str4, str5, 3);
     
}