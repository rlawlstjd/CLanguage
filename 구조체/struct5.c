#include <stdio.h>

struct score{
    int kor; 
    int eng; 
    int math; 
};

void print_st(struct score *p){
    printf("%d\n", p->kor);
    printf("%d\n", p->eng);

    // (*p).kor;  
}; 
int main(void){
    struct score a; 
    struct score *sp = &a; 
    a.kor = 90; 
    a.eng = 80; 
    a.math = 75; 
    // *간접 참조 연산자 . 멤버 접근 연산자 
    // (*).kor -> 이것이 너무 번거롭더라 . so 화살표 연산자 사용 
    sp -> kor; // sp 가 가리키는 것의 kor 멤버를 사용하겠다. 
    scanf("%d", &sp->eng); 
    sp->kor + sp->eng + sp->math; 

    print_st(&a); 
}