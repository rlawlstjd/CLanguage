#include <stdio.h>

int main (void){
    char str[20]; 
    
    fgets(str, sizeof(str), stdin); 
    // 배열의 이름, 배열의 크기, 버퍼로부터 입력받는 것이니 stdin 
    //str[20] 이면 str[0] ~ str[18] 까지 입력받고 마지막 str[19]은 널 '\0'자리 
    // gets() 는 개행문자를 만나면 종료 
    // fgets()는 개행문자 뒤 널문자 만나면 종료 
    printf("%s", str); 
    
    puts(str); // 배열에 들어와있는 모두를 출력 but 줄을 자동으로 바꿈. 


}