#include <stdio.h>

int main(void){
    char *ap = "dog"; // dog의 d주소  도그라는 값이 넘어가는게아니라 도그가 저장되어있는 시작 d의 주소가 넘어가는 것
    char *bp = "elephant"; // e 

    // 배열로 
    char *sp[5] = { /// -> 포인터 배열 
        "dog", 
        "elephant", 
        "horse", 
        "tiger", 
        "lion"
    };   

    for (int i=0; i<5; i++){
        printf("%s\n", sp[i]); 
    }
}