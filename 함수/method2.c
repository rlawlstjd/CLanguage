#include <stdio.h>

void print_char(char ch, int cnt){
    int i; 
    for (int i=0; i<cnt; i++){
        printf("%c", ch); 
    }
    //retrun 써도 되고 안써도 되고 
}

int main (void){
    
    print_char('*', 5); 
    print_char('@', 3); 
    
}