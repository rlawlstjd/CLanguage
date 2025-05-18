#include <stdio.h>

/*
    정수 2개가 주어지면, 그 중 더 큰 수를 반환하는 함수 int max(int a, int b)를 
    작성하시오. main 함수에서는 사용자로부터 두 수를 입력받고, 이 함수를 호출하여 결과를 출력하시요.
*/

int max(int a, int b){
    int num = a > b ? a : b; 
    return num; 
}
int main(void){
    int num1 = 0; 
    int num2 = 0; 

    printf("숫자 두 개를 입력하세요 (*,*)"); 
    scanf("%d%d", &num1, &num2); 

    printf("%d", max(num1, num2)); 

}