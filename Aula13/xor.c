#include <stdio.h>

int main(){

    int a = 24;
    int b = 322; 

    a = a ^ b; 
    b = a ^ b; 
    a = a ^ b; 
    
    printf("a: %d, b: %d\n",a,b); 
}