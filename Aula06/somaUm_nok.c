#include <stdio.h>

void somaUm(int n);

int main() {

  int n = 3;

  printf("Antes: %d\n", n);
  somaUm(n);
  printf("Antes: %d\n", n);
}

void somaUm(int n){
  n = n+1; 
}