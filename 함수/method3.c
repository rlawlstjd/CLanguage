#include <stdio.h>

void print_line(void){
    int i; 
    for (int i=0; i<50; i++){
        printf("-"); 
    }
}

int main (void){
    print_line(); 
}