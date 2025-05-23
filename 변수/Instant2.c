#include <stdio.h>

int a;  // 전역변수를 쓰면 컴파일 타임에 0으로 초기화 됨. 
// 전역변수의 이름을 바꾸면 이 전역변수를 사용하는 것들의 이름을 모두 바꿔줘야함. 
// 디버깅 자체가 좀 힘듦. cauase 모든곳에서 사용할 수 있기 때문. 
// 가능한 사용하지 않는 혹은 최소화해서 사용하는 것이 좋다. 
void assign10(void){
    a = 10; 
}
void assign20(void){
    int a ; 
    a = 20; 
}
int main(void){
    printf("%d\n", a); 
    assign10(); 
    printf("%d\n", a); 
    assign20(); 
    printf("%d\n", a); 

}