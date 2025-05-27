#include <stdio.h> // 표준입출력
#include <string.h> // 문자 
#include <stdlib.h> // 동적할당


int main(void){
    char temp[200];
    char *sp [3]; 
    for (int i=0; i<3; i++){
        fgets(temp, sizeof(temp), stdin); // gets 는 더이상 지원 안되는 것 같음. 
        // fgets(배열명, 최대 몇글자수? , stidin); 실제로는 size-1 글자까지만 읽고, 그 뒤에는 자동으로 널문자 추가함. 
        sp[i] = malloc(strlen(temp)+1); 
        strcpy(sp[i], temp); // 복사 다 끝나면 널 문자. 
    }

    for (int i=0; i<3; i++){
        printf("%s\n", sp[i]); 
    }
}