#include <stdio.h>

int main(void){
    int a = 10; 
    printf("%d\n", a); 
    {
        int a = 20; 
        {
            a++;  // 가장 가까운 변수에 적용 
        }
        printf("%d\n", a);  // 블록안의 a 
    }
    printf("%d\n", a); 
}