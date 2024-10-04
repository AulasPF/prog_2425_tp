/**
 * @file array02.c
 * @author Pedro Fonseca (pf@ua.pt)
 * @brief Atribuição de valores a um array na criação
 * @version 0.1
 * @date 2024-10-04
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>

int main() {

  int myArray[5] = {0, 1, 1, 2 , 3};

  /* Imprime o valor dos elementos do array: */
  for (int i = 0; i < 5; i++) {
    printf("%d ", myArray[i]);
  }
  printf("\n");
}