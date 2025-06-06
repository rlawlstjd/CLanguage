#include <stdio.h>
#include <stdlib.h>



int main(void){

    int *p; 

    p = (int *)malloc(sizeof(int)); 
    if (p == NULL){
        print('-'), exit(1); // 문제가 있어서 프로그램종료할 땐 1 정상종료는 0  약속. 
    }// eixt 꼭 써야하나? return(0)- 프로그램종료 하면 안되나 ? 
    // 어떤함수에서든 프로그램을 끝내고 싶으면 exit()함수를 호출해주면 되더라. 
    *p = 10; // 동적할당하는 곳에 10을 집어넣어라 
    scanf ("%d", &(*p)); // p가 가리키는 값의 주소 
    *p + 20; 
    // 동적할당에는 포인터 연결이 필수이다. !  ! 
    // 연속된 공간이 아니면 동적할당을 할 수 없다? 
    free(p); // -> 동적할당 함수 반납 
    // 


}

/*
    동적할당 -> 데이터를 저장하기 위한 메모리 저장 공간을 동적으로 할당함. 
    프로그램을 작성할 때 , 변수나 배열선언을 통해서 확보함. 
    프로그램을 수정하지 않고서는 한 번 작성한 프로그램이 실행이 될 때 저장공간 자체는 바뀌지 않는다. 
    프로그램 실행중에 입력되는 데이터를 즉각적으로 처리하려면 프로그램 실행중에 저장공간을 확보하는것이 필요하다. 
    이 때 저장공간을 확보하는 것이 동적할당이라고 한다. 

    -> 동적할당을 할 때는 배열선언, 변수 선언을 할 수 없음. 
    '함수 호출'을 통해서 메모리 저장공간을 확보하는 방법 뿐. 
    
    동적할당 함수 malloc, free 두 가지 , <stdlib.h> -> 동적할당. 

    메모리 영역 영역별로 나눠져 있음. 
    1. 코드영역 (text영역)
    2. 데이터 영역 (data 영역) (정적 지역변수, 전역변수등 저장공간이 확보되는 영역)
    3. 스택 영역 (stack 영역) (지역변수 )
    4. 힙 영역 (heap) 100 ~ 103 이면 100번 주소를 넘겨주는 malloc 함수 
*/