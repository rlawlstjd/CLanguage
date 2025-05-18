#include <stdio.h> 

int main(void){
    int a = 1; 
    

    // do while -> 무조건 한 번은 수행을 함 ( 조건이 거짓되어도. )
    do {
        a *= 2+1; 
        printf("a = %d\n", a); 
    }while(a >10);
}