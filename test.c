#include<stdio.h>
int C(int v){
    printf("%d", v); 
    return 1; 
}
int main(){
    int a = -2;
    int b = !a; 
    printf("%d %d %d %d ", a, b, a&&b, a||b); 
    if(b && C(10))
        printf("A "); 
    if(b & C(20))
        printf("B "); 
    return 0; 
}