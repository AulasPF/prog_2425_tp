#include <stdio.h>

int fibonacci(int n); 

int main(){

  int n; 

  printf("Número de termos: ");

  scanf("%d",&n); 


  printf("Primeiros %d termos da sequência de Fibonacci:\n",n); 
  for(int i=0; i<n; i++){
    printf("%d ",fibonacci(i));
  }

  return 0; 
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;  // Primeiro caso: Fibonacci(0) = 0
    } else if (n == 1) {
        return 1;  // Segundo caso: Fibonacci(1) = 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursivo
    }
}