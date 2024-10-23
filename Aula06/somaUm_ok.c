#include <stdio.h>

void somaUm(int * pn);

int main() {

  int n = 3;

  printf("Antes: %d\n", n);
  somaUm(&n);
  printf("Antes: %d\n", n);
}

void somaUm(int * pn){
  *pn = *pn+1; 
}