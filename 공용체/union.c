#include <stdio.h>

//공용체 이름 Union

union student{
    int num; 
    double grade; 
};
// struct 는 멤버들의 크기들을 모두 합하지만 union 은 가장 큰 값을 기준으로 함. 
// 초기화 : strcut 는 초기화를 순서대로 할 수 있었지만 union은 첫번째 멤버만 초기화만 가능하다. 
// union student a = {315};  or  = {.grade=3.4} 이런식으로 

int main(void){

    union student a; 

    a.num = 315; 
    printf("%d\n", a.num); 
    a.grade = 3.5; 
    printf("%d\n", a.num); 

}