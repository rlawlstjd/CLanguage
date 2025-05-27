#include <stdio.h>

// 자기 참조 구조체 . 
struct list{
    int num;
    struct list *next; 
};

int main (void){
    struct list a = {10}, 
                b = {20}, 
                c = {30}; 
    a.next = &b; 
    b.next = &c; 
    c.next = NULL; 
    // a.num;  a의 넌ㅁ버 
    // a.next -> num ;  a가 가리키는 값의 넘버 
    // a.next -> next -> num ; a가 가리키는 값이 가리키는 값의 넘버 

    struct list *tp = &a; // tp 4바이트 
    tp -> num ; 
    while(tp != NULL){
        printf("%d\n", tp -> num); 
        tp = tp -> next; 
    }
}