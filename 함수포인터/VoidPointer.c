#include <stdio.h>

int sum (int a, int b){ // 매개변수 
    int res; 
    res = a + b; 
    return res; 
}
// int (*fp)(int, int); -> 함수 포인터 선언 
// fp = sum; 

int main(void){
    int a = 10, b = 20, res; 

    int (*fp)(int, int); 

    fp = sum;

    res = (*fp)(a,b); 

    printf("%d\n", res); 

}

