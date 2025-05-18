#include <stdio.h>
#include <stdlib.h> // eixt, EXIT_FAILURE

/*
사용자로부터 음이 아닌 정수 x 를 입력받아, x의 각 자리 숫자를 
모두 더한 결과를 출력하는 함수를 작성하시오. 
 */
int main (void){
    int x = 0; 
    int sum = 0; 

    printf("음이 아닌 정수를 입력하세요"); 
    scanf("%d", &x); 
    if (x < 0){
        printf("음수를 입력하셨습니다. 다시시도해 주세요");
        return EXIT_FAILURE; 
    }

    while (x > 0){
        sum += (x%10); 
        x /= 10; 
        printf("%d", sum); 
        //printf("%d, ", x); 
    }

    printf("최종 값dddd : %d", sum); 
}