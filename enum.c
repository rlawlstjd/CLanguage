#include <stdio.h>

enum season{
    spring, summer, fall, winter
};

int main(void){
    enum season a; 
    a = spring; 
    if (a == spring){
        printf("-----"); 
    }
}