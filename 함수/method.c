#include <stdio.h>

int sum(int a, int b){
    int res = 0; 
    res = a + b; 
    return res; 
  };

int main (void){
    int a = 10 , b = 20 ; 

    printf("%d", sum (a,b)); 
  
}

// 자바와 달리 main 밖에다가 함수를 저장함. 