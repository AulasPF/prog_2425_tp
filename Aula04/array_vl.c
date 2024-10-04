/**
 * @file array_vl.c
 * @author Pedro Fonseca (pf@ua.pt)
 * @brief Exemplo de arrays de tamanho variável
 * @version 0.1
 * @date 2024-10-04
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>

int main() {

  /* O tamanho do array é definido através de uma variável...*/
  int tamanho = 4;

  /* ...que é usada na criação do array */
  int vlArray[tamanho];

  for (int i = 0; i < tamanho; i++) {
    vlArray[i] = 2 * i;
    printf("%d ", vlArray[i]);
  }
  printf("\n");
}