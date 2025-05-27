#include <stdio.h>
#include <string.h>

struct profile{
    char name[20]; 
    int age; 
    double height; 
};

struct student{
    struct profile pf; // 자바의 상속 느낌? 
    int num; 
    double grade; 
};

int main(void){
    // struct student a ={
    //     {"홍길동", 17, 183.5},
    //     315, 3.5
    // };

    // 지정 초기자 -> 
    struct student a = {
        .pf = { .name = "홍길동", .age=17, .height=183.5}, 
        .num = 315, 
        .grade = 3.5
    }; 
    // 개별 멈버 변경 . 
    // strcpy(a.pf.name, "이옇희"); 
    // a.pf.age = 19; 
    // a.pf.height = 168.2; 
    // a.num = 200; 
    // a.garde = 3.4; 

    // 구조체 복사 
    struct student b; 
    b = a; 
    
}