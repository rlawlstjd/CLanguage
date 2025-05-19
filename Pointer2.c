#include <stdio.h>

int main(void){
    char ch; 
    int in; 
    double db;

    char *pc = &ch; 
    int *pi = &in; 
    double *pd = &db; 

    printf("%d\n", sizeof(*pc));// 크기는 퍼센트 d 
    printf("%d\n", sizeof(*pi));
    printf("%d\n", sizeof(*pd));  

}