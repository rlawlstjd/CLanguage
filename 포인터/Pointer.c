#include <stdio.h>

int main (void){
    int a;  // 4바이트 
    //10바이트면 주소값도 10개 ( 주소값은 바이트 단위로 있음 )
    a = 10; // 2진수로 4바이트에 저장 1010
    
    //공간으로 쓸 때 l-value, 값으로 쓰일 때 r-value
    // & 주소 연산자 &a = a의 시작 주소 
    // * 간접 참조연산자 
    printf("%d\n", &a); 
    // %p -> 16진수 주소값 %d -> 큰 주소값이면 음수가 나옴 대안으로 %u

    *&a = 10 ; 
    int b = *&a + 20;
    
    printf("%d\n", b); 

    // 이름부이고 앞에 * 을 붙이면 포인터 선언
    int *p; 
    p = &a;
    printf("%d\n", p); 
    printf("%d\n", *p); 
    *p = 20; 
    printf("%d\n", a); 
    // 여기서 p가 가리키는 것을 쓰고싶다 하면 *p  

}