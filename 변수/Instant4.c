#include <stdio.h>


// register -> cpu 안의 저장공간을 사용한다. 
// 
void register_furd(void){
    register int a = 10; 
    printf("%d", a); 
    a++; 
}
int main(void){
    register int i; 
    for (int i=0; i<5; i++){
        register_furd(); 
    } 

}