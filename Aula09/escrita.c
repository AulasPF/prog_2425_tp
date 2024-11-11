#include <stdio.h>

int main(){

  char nome[]="";    /* Escrever aqui o nome */

  FILE *fp; 



  fprintf(fp,"%s\n", nome); 

  fclose (fp); 

  return 0; 
}