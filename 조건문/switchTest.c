#include <stdio.h>

/*
    정수 day가 주어졌을 때, 1~7까지 각각 다음과 같이
    대응시켜 출력하세요. 
*/

int main(void){
    int day = 0; 

    printf("1~7까지의 숫자를 입력하세요"); 
    scanf("%d", &day); 

    switch(day){
        case 1:
            printf("Monday"); 
            break; 
        case 2: 
            printf("Tuesday"); 
            break; 
        case 3: 
            printf("Wednesday"); 
            break; 
        case 4: 
            printf("Thursday"); 
            break; 
        case 5:
            printf("Friday"); 
            break; 
        case 6:
            printf("Saturday"); 
            break; 
        case 7:
            printf("Sunday"); 
            break; 
        default:
            printf("Invalid day"); 
    }

}