#include <stdio.h>

//재귀호출 함수 자기본인을 호출하는 함수 

// void fruit(void){
//     printf("apple\n"); 
//     fruit(); 


//     // 무한반복? 
//     // 차라리 반복문을 쓰는게 낫다 . 

// }

void fruit (int cnt){
    printf("apple\n"); 
    if (cnt == 3) return ; 
    fruit(cnt+1); 
    printf("jam"); 
}
int main(void){
    fruit(1); 
}


