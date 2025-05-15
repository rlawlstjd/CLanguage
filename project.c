#include <stdio.h>
#include <string.h>

int main(void){ // 매개변수 사용하지 않겠다. {

    int a =0, b=0; 
    scanf("%d,%d", &a,&b); 
    
    if (a > 0){
        if (b == 0){
            a = 0; 
            printf("%d,%d", a,b); 
        } else {
            printf("%d,%d", a,b); 
        }
    } else {
        a = -1 ;
        printf("%d,%d", a,b);
    }
    {}

}