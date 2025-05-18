#include <stdio.h>

// for 문을 통하여 구구단을 완성하시오 
int main (void){
    int x = 0; 
    int y = 0; 

    for (int i=2; i<=9; i++){
        printf("%d단\t\t", i);
    }
    printf("\n");
    for (int i=1; i<=9; i++){
        for (int j=2; j<=9; j++){
            printf("%d * %d = %d\t ", j, i , i*j); 
        }
        
        printf("\n"); 
    }
    
}