#include <stdio.h>

void swap(int *a, int *b){
    int t; 
    t = *a; 
    *a = *b; 
    *b = t; 
    
    // int t; 
    // t = a; 
    // b = a;  
    // a = t; 
}

int main (void){
    //포인터는 왜 쓰는가 ? 
    int a = 10, b = 20, t; 

    printf("%d, %d\n", a,b); 


    swap(&a, &b); 
    // t = a; 
    // a = b; 
    // b = t; 

    printf("%d, %d\n", a,b); 

}