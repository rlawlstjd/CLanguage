#include <stdio.h>
#include <string.h>

int main(void){ // 매개변수 사용하지 않겠다. {

    int a = 10; 

    *&a = 20; 

    printf("%d\n", a); 

}