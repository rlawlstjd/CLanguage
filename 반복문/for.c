#include <stdio.h>

int main(void){
    int a = 0; 
    int sum = 0; 

    for (int i=0; i<10; i++){
        sum += a+i; 
    }

    printf("0부터 10까지의 합계: %d", sum); 
}