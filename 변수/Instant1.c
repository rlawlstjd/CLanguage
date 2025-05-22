#include <stdio.h>

int main(void){

    int a = 10, b = 20; 
    printf("%d, %d\n", a, b); 

    {
        int temp; 
        temp = a; 
        a = b; 
        b = temp; 
    }
    // -> 변수를 블록에섬 사용할 수 있음. 

    printf("%d, %d\n", a, b); 
}