#include <stdio.h>

int main (void){
    int ary[5] = {10, 20, 30}; //-> 10, 20, 30, 0, 0 
    int ary1[5];   // -> 1,2,3,4,5
    
    // int ary[5];  // 배열 다섯개. 
    // ary[0] = 10; 
    // printf("값을 입력하세요."); 
    // scanf("%d", &ary[1]); 
    // ary[2] = ary[0] + ary[1]; 

    //배열에 숫자 넣기 for 
    for (int i=0; i<5; i++){
        scanf("%d", &ary1[i]); 
    }

    //평균구하기 
    int sum; 
    double avg; 
    int length = sizeof(ary1) / sizeof(ary1[0]); 

    
    for (int i=0; i<length; i++){
        sum += ary1[i];  
    }


    avg = (double)sum / length; 

    printf("ary1 배열 평균 값은 = %f", avg); 


}