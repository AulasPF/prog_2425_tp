/**
 * @file armas2.c
 * @author Pedro Fonseca (pf@ua.pt)
 * @brief Uso de fgets com teste ao resultado da leitura
 * @version 0.1
 * @date 2024-10-30
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdio.h>

int main() {

  char frase[32];

  if (fgets(frase, 31, stdin) != NULL) {
    /* Leitura OK */
    printf("%s\n", frase);
  }
  else{
    /* Erro na leitura */
    printf("Erro na leitura.\n");
  }
}