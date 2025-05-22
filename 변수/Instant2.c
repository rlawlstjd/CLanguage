#include <stdio.h>

int a;  // 전역변수를 쓰면 컴파일 타임에 0으로 초기화 됨. 
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