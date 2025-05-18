#include <stdio.h> 

int main(void){
    // while -> 거짓이 될 때 까지 무한 루프. 

    int a = 1 ;

    printf("while문 시작\n");
    while (a < 10){
        a = a * 2; 
        printf("%d\n", a); 
    }
    printf("while문 종료\n"); 

    a = 1; 

    printf("while문 시작\n"); 
    for(int i=0; i<3; i++){
        a *= (i+1);
        printf("%d\n",a); 
    }
    printf("for문 종료\n"); 

}