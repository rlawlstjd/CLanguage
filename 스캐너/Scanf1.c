#include <stdio.h>

int main(void){
    int a; 
    scanf("%d", &a); 
    // if 10엔터 치면 1,0,\n 이 들어감 . 총 세 개 숫자 10이 아님
    // 버퍼에 1,0 이 들어가서 %d 변환문자를 통해 정수 10으로 변화 
    double b; 
    scanf("%lf", &b); 
    // 마찬가지로 실수로 변환하는 변환문자 %lf (버퍼에 들어와있는 문자를 변환문자의 형태에 맞게 바꿔줌)
    char ch; 
    scanf("%c", &ch); 

    int num; 
    char grade; 
    scanf("%d", &num); 
    scanf("%c", &grade); 
    //num에 입력이 되고 버퍼에 남은 개행문때문에 학년은 입력받지 못한채 
    //grade 에 개행문자가 자동으로 입력이되고 직접 학년을 설정하지 못하게 됨. 
    // so 해결하기 위해선 그 학년의 변환문자 앞에 공백을 넣거나 d와 c 사이에 getchar() 사용
}   