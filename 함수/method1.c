#include <stdio.h>

int get_pos(void){
    int num ;
    printf("숫자를 입력하시오"); 
    scanf("%d", &num); 
    while (num < 0){
        printf("양수를 입력하시오"); 
        scanf("%d", &num); 
    }

    return num; 
}

int main (void){
    int pos; 
    pos = get_pos(); 

    printf("%d", pos); 
}