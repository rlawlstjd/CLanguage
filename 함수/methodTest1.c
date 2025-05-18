#include <stdio.h>

/*
    5개의 정수를 입력받아 배열에 저장하고, 이배열을 매개변수로 받아 
    평균을 반환하는 함수를 작성하시오. 
*/

double getAverage(int arr[], int size){
    int sum = 0; 
    double avg = 0;
    for (int i=0; i<5; i++){
        sum += arr[i]; 
    }
    avg = (double)sum/size; 
    return avg; 
}

int main(void){
    int num[5]; 
    
    printf("숫자를 5개 입력하세요"); 
    for (int i=0; i<5; i++){
        scanf("%d", &num[i]); 
    }

    printf("%.2f", getAverage(num, sizeof(num)/sizeof(num[0]))); 
    
}