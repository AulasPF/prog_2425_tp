/**
 * @file arrayfbinw.c
 * @author Pedro Fonseca (pf@ua.pt)
 * @brief Escreve dados num ficheiro binário
 * @version 0.1
 * @date 2024-12-09
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>
#include "aluno.h" 


int main() {

  struct aluno array[10];

  preencheArray(array, 10);
  printArray(array, 10);

  FILE *fp = fopen("array.bin", "wb");
  if (fp == NULL) {
    fprintf(stderr, "Erro a abrir ficheiro.\n");
    return 1;
  }

  if (fwrite(array, sizeof(struct aluno), 10, fp) < 10) {
    fprintf(stderr, "Erro a gravar dados.\n");
    return 2;
  };
  return 0;
}

