#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *p ; 
    // malloc (5 * sizeof(int)) -> 동적할당 받은 영역에 쓰레기 값을 그대로 둠
    calloc(5, sizeof(int)); // 동적할당 받은 영역을 0으로 모두 초기화 
    // colloc 함수는 인수가 두 개 , 내가 할당 받고자하는 공간(배열 요소의 개수), 배열 요소의 크기. 
    // 그럼 cllooc이 더 편리한 것이 아닌가?  => 자동초기화 하는 경우는 시간이 많이 걸림. 
    // but 초기화 할 필요가 없으면 malloc이 더 효율적 

    p = (int *)realloc(p, 10*sizeof(int));//1. 이미할당 쓰고있는 저장공간 포인터, 2. 내가 조정하고 싶은 크기  
    

}