#include <stdio.h>

int main(void){
    // char ch; 
    // ch = getchar(); //입력받아 호출 될 때 마다 꺼낸 후 삭제. 
    // while(ch != '\n'){
    //     putchar(ch); //출력 
    //     ch = getchar(); 
    // }
    // //버퍼는 FIFO 이기 때문에 와일문안에 getchar() 또 넣어주는거임. 


    // // ! 버퍼에 있는 데이터를 지우는 함수 -> fflush(stdin) 스탠다드 인. 
    // fflush(stdin);
    // /*
    //     fflush(stdin)은 표준 C에선 입력 스트림에선 정의되지 않은 동작이기 때문에 포터블하지 않다. 
    // */
    // // 안전하고 표준적인 대안 
    // // getchar() 루프 
    int c ; 
    while ((c = getchar()) != '\n' && c != EOF){
        putchar(c); 
    }
}