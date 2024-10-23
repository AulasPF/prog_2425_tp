/**
 * @file fsimples.c
 * @author Pedro Fonseca (pf@ua.pt)
 * @brief Exemplo de um programa que usa funções simples
 * @version 0.1
 * @date 2024-10-22
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <stdio.h>

/**
 * @brief Soma dos valores
 *
 * @param a Primeira parcela da soma
 * @param b Segunda parcela da soma
 * @return int Soma das duas parcelas
 */
int soma(int a, int b) {
  int res;
  res = a + b;
  return res;
}

int main() {

  printf("Exemplo simples de uso de uma função.\n");

  int n1, n2;

  printf("Valores: ");
  scanf("%d", &n1);
  scanf("%d", &n2);

  int resultado;

  resultado = soma(n1, n2);

  printf("%d + %d = %d\n", n1, n2, resultado);

  /* Também podia ser assim: */
  printf("%d + %d = %d\n", n1, n2, soma(n1,n2));

  return 0;
}