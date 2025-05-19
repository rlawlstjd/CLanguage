#include <stdio.h>

int main(void){
    int a = 10, b = 20; 
    int tot; 
    double avg; // 8 바이트 
    
    // 포인터도 묶어서 가능. 
    int *pa, *pb, *pt;
    double *pg; 
    // 가리키는 자료의 크기와 상관없이 포인터는 무조건 4바이트 

    pa = &a; 
    pb = &b; 
    pt = &tot;
    pg = &avg; 

    // !! 포인터에는 일반 정수값이 들어오면 안됨. Only 주소값만 허용. 
    // if 정수값 들어오면 매우 위험. 100이 들어오면 100을 주소처럼 저장함. 
    *pt = *pa + *pb;
    *pg = *pt / 2.0; 

    printf("%d\n", pa); 
    printf("%d,%d\n", *pa, *pb); 
    printf("%d\n", *pt); 
    printf("%.1lf\n", *pg); 

    // scanf("%d", &a) -> &a 의 주소에다가 입력받은 값을 넣기. 
    scanf("%d", *pa); 
    // &pa -> 포인터 pa의 주소 , *pa -> pa 값이 가리키는 곳 , pa 





}