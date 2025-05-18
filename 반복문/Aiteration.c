#include <stdio.h>

int main (void){
    int i = 10, sum = 10; 
    
    // while문  break; 
    while (1){
        sum += i; 
        i++; 
        if (sum > 1000) 
            break;
    }

    printf("%d", i); 
    printf("반복문 합계 숫자: %d\n", sum); 


    sum = 0; 
    //fon문 continue 
    for (int i=1; i<=100; i++){
        if ((i%3) == 0)
            continue; 
        sum += i; 
    }
    printf("for문 총 합: %d\n", sum); 


    //break 는 반복문을 벗어날 때 쓴다. 
    //continue는 반복문 일정 부분을 조건에 따라 건너뛸 때 쓴다. 
}