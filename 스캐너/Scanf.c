#include <stdio.h>

int main (void){
    char ch; 
    int i, res; 
    
    // (1)
    // scanf("%c", &ch); 
    // while(ch != '\n'){
    //     printf("%c", ch); 
    //     scanf("%c", &ch); 
    // }

    // (2)
    // for (int i=0; i<3; i++){
    //     scnaf("%c", &ch); 
    //     printf("%c", ch); 
    // }
    // tiger 라고 한 번 쳐도 tig 가 나옴. (버퍼를 쓰기 때문); 
    // tiger\n 개행문자까지 버퍼 들어감 총 6개 

    // scanf는 반환값을 가지는 함수임, 입력에 성공한 개수를 반환하는 
    
    // (3)
    // res = scanf("%c", &ch); 
    // while (res != -1){
    //     printf("%c", ch); 
    //     res = scanf("%c", &ch); // 반환값을 가짐 . 컨트롤 + z 누르면 -1 반환되어 종료  
    // }
}