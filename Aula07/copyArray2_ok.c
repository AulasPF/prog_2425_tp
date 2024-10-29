#include <stdio.h>
#include <string.h>

int main(){
  char frase1[10]="A frase"; 
  char frase2[10]; 
  
  strcpy(frase2,frase1); 
  
  printf("%s\n", frase2); 
}
