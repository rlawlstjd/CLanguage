#include <stdio.h>

int main(void){
    auto int a = 0;
    // 지역변수 -> auto, auto 없이 써도 컴파일이 자동으로 해줌. int 로 적어도 지역변수가 되는거임. 
    printf("%d", a); 
    assign(); 
    printf("%d", a); 
}