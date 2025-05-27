#include <stdio.h>
#include <string.h>


struct address{
    char name[20]; 
    int age; 
    char tell[20]; 
    char addr[80]; 
}; 

void print_ary(struct address *p){
    for (int i=0; i<5; i++){
        printf("이름:%s", p[i].name); 
        // p[i]의 타입은 struct address 이고, 포인터가 아니다. 
        // 포인터 연산자 -> 를 쓰려면 p[i]가 struct address*여야 하는데, 지금은 
        // struct address 이기 때문
        print("나이:%d", p->age);
        
    } 
};
int main(void){
    struct address a[5] = {
        {"김범수", 20, "1111", "서울"}, 
        {"나얼", 21, "2222", "인천"}, 
        {"박효신", 22, "3333", "경기"}, 
        {"이수", 23, "4444", "대구"}, 
        {"신용재", 24, "5555", "부산"}
    }; // 구조체 배열 a[0], a[1], a[2], a[3], a[4]
    
    printf("%s\n", a[0].name); 
    printf("%d\n", a[0].age); 

    //구조체 배열을 처리하는 함수 
    print_ary(a); 

    // 자기 참조 구조체??
}
