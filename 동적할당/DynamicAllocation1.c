#include <stdio.h>

int main(int argc, char **argv){// argument count, argument vector
// 명령행에서 넘어온 인수의 개수를 받는(count), 주소값을 받아주는  argc- 3 argv 500 
    for (int i=0; i<argc; i++){
        printf("%s\n", argv[i]); 
    }

    // while (*argv){// argv가 0되면 종료 
    //     printf("%s\n", *argv); 
    //     argv++; 
    // }
}