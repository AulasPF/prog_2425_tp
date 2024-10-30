#include <stdio.h>
#include <string.h>

int main(){
  char frase1[32]="As armas e os baroes assinalados"; 
  char array1[16]="---------------"; 
  char frase2[16];
  
  printf("a:%s\n", frase2); 
  printf("b:%s\n", array1); 

  strcpy(frase2,frase1); 
  
  printf("c:%s\n", frase2); 
  printf("c:%s\n", array1); 
}
