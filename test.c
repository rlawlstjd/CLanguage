#include <stdio.h>
#include <string.h>

int main(void){ // 매개변수 사용하지 않겠다. {

    int a, b; 
    int *p = &a; 
    int *q = &a; 
    *p = 10 ; 

    printf("%p\n", p); 
    printf("%p\n", q); 
    
    printf("%d\n", *p); 

}