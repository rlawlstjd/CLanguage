#include <stdio.h>

//매개변수 없고 반환값 없는 함수 
void print_line(void){
    int i; 
    for (int i=0; i<50; i++){
        printf("-"); 
    }
}

int main (void){
    print_line(); 
}
