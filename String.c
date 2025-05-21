#include <stdio.h>

int main(void){
    printf("%c\n", *"apple"); 
    // printf는 해당 주소부터 개행 '\0' 종료문자가 나올 때 까지 
    // 즉 "apple"은 100부터 시작  *"apple" => a (100)
    // *("apple" + 3) -> l
    // "apple"[3] -> l 

    char *cp = "Tesla";  // cp 4바이트 // 여긴 T의 주소가 들어온거임 
    // 즉 100을 가리키는 포인터 a - 100 
    printf("%s\n", cp); 
    // 문자열 %s , 문자 %c
    
    while( *cp != '\0'){
        printf("%s\n", cp); 
        cp ++; // 한자리씩 이동하여 출력되니 ... 
    }




}