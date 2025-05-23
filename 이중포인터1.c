#include <stdio.h>

void swap(char* *app, char **bpp){ // ap의 주소를 받고, *ap의 값을 확인하는 ** 이주옾인터?
    char *tp; 
    tp = *app; 
    *app = *bpp; 
    *bpp = tp; 
}

int main(void){
    char *ap = "success"; 
    char *bp = "failure"; 
    char *tp ; 
    printf("%s, %s\n", ap, bp); 
    printf("%s, %s\n", ap, bp);

    swap(&ap, &bp);  
}