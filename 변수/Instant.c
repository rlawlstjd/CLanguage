#include <stdio.h>

void assign(void){
    int a; 
    a = 10; 
}

int main(void){
    auto int a = 0;
    // 지역변수 -> auto, auto 없이 써도 컴파일이 자동으로 해줌. int 로 적어도 지역변수가 되는거임. 
    printf("%d", a); 
    assign(); 
    printf("%d", a); 
}
/* 지역변수를 씀으로써 메모리관리면에서 효율적임. 사용하지 않는 것을 운영체제에서 회수해감
그 지역에서만 변수를 사용하니 , 디버깅이 유리하다. */