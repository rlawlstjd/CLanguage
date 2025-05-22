#include <stdio.h>

//주소값을 반환하려면? Int 주소값을 저장하려면 int* 정수 포인터 
int* sum (int a, int b){
    int res; 
    res = a+b; 
    return &res; 
}

int main(void){
    int a = 10, b = 20; 
    int *resp; 

    resp = sum (a, b);  // 주소값 반환이 됨. sum 변수에서 . 

    printf("%d", *resp); 
}