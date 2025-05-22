#include <stdio.h>

void add_ten(int *a){
    *a += 10; 
}

int main (void){

    int a = 10; 
    
    //a = add_ten(a);
    // 주소를 줄 수도 있음. 
    add_ten(&a); 
    printf("%d",a); 
}