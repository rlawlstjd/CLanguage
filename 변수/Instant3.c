#include <stdio.h>
// static 정적 지영변수 
// -> 함수가 작업해 놓은 데이터를 계속 유지하고 싶을 때, 다음에 호출 됐을 때 활용할 필요가 있을 때. 
void static_furd(void){
    static int a= 0; 
    // static이  함수 안에서 사용이 되더라도 컴파일 시 전역변수 처럼 바깥으로 빼버림 
    // 초기화도 자동으로 됨. 
    a++; 
    printf("%d\n", a); 
}

int main(void){

    int i ; 
    for (i=0; i<5; i++){
        static_furd(); 
    }
    
}