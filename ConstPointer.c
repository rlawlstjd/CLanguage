#include <stdio.h>

int main(void){
    int a, b; 
    int *pa = &a; 
    pa = &b; 

    // const = 어떤 변수가 저장한 상태에서 다른 것을 저장할 수 없게하는 것. 

   const int *pb; //pb는 int를 가리킴, 값은 수정 불가, 주소는 바꿀 수 있음. 
   pb = &b; 
   pb = &a; 

   const int *const pc = &a; 
   pc = &a; 
   

   printf("%p\n", pa); 
   printf("%p\n", pb); 
   printf("%p", pc); 
}