#include <stdio.h>

// 정수 n이 주어졌을 때, 이 수가 홀수인지 확인하시오. 
// 홀수면 "홀수입니다"를 출력하고, 짝수면 아무것도 출력하지 마시오. 


int main (void){
    int num = 0; 
    printf("정수를 입력하세요"); 
    scanf("%d", &num); 
    if ((num%2)==1){
        printf("홀수 입니다."); 
    } 
}