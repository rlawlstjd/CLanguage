#include <stdio.h>

void print_str(char **spp){
    for (int i=0; i<5; i++){
        printf("%s\n", spp[i]);
    }
}

int main(void){
    char *sp[5] = { // sp[0] 
        "dog", 
        "cat"
    };
    
    print_str(sp); 

}