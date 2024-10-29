#include <stdio.h>

int main(){
  char frase1[10]="A frase"; 
  char *frase2; 
  
  frase2 = frase1; 
  
  printf("%s\n", frase2); 
}
