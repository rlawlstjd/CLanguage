#include <stdio.h>

struct vision {
    double left; 
    double right; 
}; 

struct vision swap(struct vision b){
    double temp ; 
    temp  = b.left; 
    b.left = b.right; 
    b.right = temp; 
    return b; 
}
int main (void){
    struct vision a = {1.5, 2.0}; 
    a = swap(a);  
    printf("%.1lf, %.1lf", a.left, a.right); 
}

