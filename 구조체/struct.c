#include <stdio.h>


/*
    한학생과 관련된 데이터들을 하나로 묶어서 변수처럼 사용하는 구조
*/
// 구조체 struct 
struct student{
    int num;
    double grade; 
};
int main(void){
    struct student a; // 12 바이트 
    // a.멤버 접근 연산자 .  . . . 
    a.num = 315; 
    scanf("%d", &a.num); 
    a.grade = 3.5;
    scnaf("%f", &a.grade);  
}