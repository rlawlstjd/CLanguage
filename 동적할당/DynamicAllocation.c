#include <stdio.h> // 표준입출력
#include <string.h> // 문자 
#include <stdlib.h> // 동적할당

print_str(char **spp){
    for (int i=0; i<3; i++){
        printf('%s\n', spp[i]); 
    }

}

int main(void){
    char temp[200];
    char *sp [3]; 
    for (int i=0; i<3; i++){
        fgets(temp, sizeof(temp), stdin); // gets 는 더이상 지원 안되는 것 같음. 
        // fgets(배열명, 최대 몇글자수? , stidin); 실제로는 size-1 글자까지만 읽고, 그 뒤에는 자동으로 널문자 추가함. 
        sp[i] = malloc(strlen(temp)+1); // 동적할당 후 검사코드를 넣어줘야함. 
        strcpy(sp[i], temp); // 복사 다 끝나면 널 문자. 
    }

    for (int i=0; i<3; i++){
        printf("%s\n", sp[i]); 
    }

    //동적할당 영역 반납 
    for (int i=0; i<3; i++){
        free(sp[i]); 
    }
    // 생략시, 메모리 누수현상 발생 (memory leak) 

    print_str(sp); 
}