#include <stdio.h> // printf, scanf 등을 위한 헤더#
#include <stddef.h> // size_t를 쓰려면 이 헤더에 정의되어 있다 
// 실제로 <stdio.h> 만 써도 대부분의 컴파일러에서는 size_t를 쓸 수 있도록 내부에서 
// <stddef.h>를 포합하고 있지만, size_t를 쓴다는 의도를 확실히 드러내려면 
// <stddef.h>를 직접 인클루드하는 게 좋다. 


// ** 출력하고 평균구하는 함수 
// void print_ary(int *pa, int length){
//     double avg; 
//     int sum; 
//     for (int i=0; i<length; i++){
//         printf("%d,", pa[i]); 
//         sum += pa[i]; 
//     } 
//     avg = sum / length; 
//     printf("\n평균: %.2lf", avg); 
// }

// 입력받는 함수 
void enter_ary(int *pa, int length){
    printf("숫자 다섯개를 입력하세요"); 
    for (int i=0; i<length; i++){
        scanf("%d", &pa[i]); 
        // scnaf가 필요한 것: 저장할 수조  (&) 
        // 컴파일러는 pa[i]를 내부적으로 *(p+1)로 바꿔 해석함 
    }
    for (int i=0; i<length; i ++){
        printf("%d,", pa[i]); 
    }
}

int main (void){
    int a[5] = {1,2,3,4,5}; 
    size_t b = sizeof(a)/sizeof(a[0]); 
    // print_ary(a, b);
    enter_ary(a,b);  
}