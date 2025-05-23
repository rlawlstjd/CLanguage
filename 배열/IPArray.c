#include <stdio.h>

int main(void){
    int a[5] = {1,2,3,4,5}; 
    int b[5] = {11,12,13,14,15}; 
    int c[5] = {21,22,23,24,25}; 

    int *pa[3] = {a,b,c,};  // a 를 넘겨주게 되면 a의 주소가 넘어감. 
    
    for (int i=0; i<3; i++){
        for (int j=0; j<5; j++){
            printf("%d", pa[i][j]); 
        }
        printf("\n");
    }
}

