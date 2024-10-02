#include <stdio.h>

int main() {

  int numero;   /* Guarda temporariamente o valor introduzido pelo utilizador */
  int soma = 0; /* Guarda a soma dos valores lidos */

  /* Informação para o utilizador */
  printf("O programa vai somar os números introduzidos pelo utilizador.\n");
  printf("Termina quando for introduzido o \"valor mágico\".");

  printf("Valor? ");
  scanf("%d", &numero);

  while (numero) {

    /* Soma o valor introduzido */
    soma += numero;

    /* Pede novo valor */
    printf("Valor? ");
    scanf("%d", &numero);
  }

  /* Imprime a soma dos valores introduzidos: */
  printf("O total dos valores introduzidos é: %d\n", soma);
}