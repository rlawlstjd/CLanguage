#include <stdio.h>

int main(void){
    int a; 
    int *p = &a; 
    int **pp;  // int * 자료형을 뜻함 *pp 포인터를 뜻함 
    pp = &p; 
    int ***ppp; 
    ppp = &pp; 
    // **pp = 10; 
    // *p = 10; 
    // a = 10;  모두 같은 것을 가리킴 . 
    // 만약 *pp 라고 한다면 p를 가리키는 것이 됨. 
    // ***ppp = 10; // 사실 코드가 너무 어렵고 복잡해지기 때문에 잘 사용안함. 
    
}