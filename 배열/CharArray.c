#include <stdio.h>
#include <string.h>

int main (void){
    char str[20] ; 
    str[0] = 'L'; 
    str[1] = 'O'; 
    str[2] = 'V'; 
    str[3] = 'E'; 
    str[4] = '\0'; 
    // '\0' -> 널 문자 == aschii 코드 0  

    // (while문 사용하여 출력)
    // int i = 0; 
    // while (str[i] != '\0'){
    //     printf("%c", str[i]); 
    //     i++; 
    // }

    // (for문 사용하여 출력)
    // for (int i=0; i<4; i++){
    //     printf("%d", str[i]); 
    // }

    printf("%s\n", str); 
    // %s를 사용하면 for나 while문 없이도 널문자가 있는 곳 까지 출력을 해줌. 

    //-> 문자열 표기 방법 ' ' x -> "" 을 써보자 
    
    char str1[20] = "elep  hant"; 
    printf("%s\n", str1); 

    //strcpy(어디다가, 무엇을 복사할건지); 쓸거면 string.h 라이브러리 당겨와야함
    // ** 정정 strcpy는 붙이는 함수가 아닌 , "덮어쓰는 함수"이다.
    // 두 문자배열을 붙이려면 strcat 을 사용! 
    strcat(str, str1); 
    puts(str);  // 자동 줄바꿈 
    printf("%s\n", str); 

   
    // gets(배열명); 공백(띄어쓰기, t \n 다 출력해줌)
    // puts(str); -> 자동으로 줄 바꿔줌. 
}