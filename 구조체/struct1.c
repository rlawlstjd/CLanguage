#include <stdio.h>
#include <string.h>

struct student{
    char name[20];  //20
    int age; //4 
    double height; // 8
    char *intro;  // 4
};

int main(void){
    struct student a; 

    strcpy(a.name, "홍길동"); 
    a.age  = 17; 
    a.height = 187.5; 
    a.intro = "hello"; 
    a.intro = (char*)malloc(80); // -> 동적할당으로 늘려주기  
    scanf("%s", a.intro); 
}
