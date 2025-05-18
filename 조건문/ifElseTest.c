#include <stdio.h>

/*
    0~100 사이의 점수 score가 주어졌을 때, 60점 이상이면    
    "합격입니다" 그렇지 않으면 "불합격입니다 를 출력하는 프로그램을 
    작성하시오 
*/

int main(void){
    int score = 0; 
    printf("점수를 입력하세요"); 
    scanf("%d", &score); 

    if (score >= 60){
        printf("합격입니다."); 
    } else{
        printf("불합격입니다."); 
    }
}