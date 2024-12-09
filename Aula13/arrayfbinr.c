/**
 * @file arrayfbinr.c
 * @author Pedro Fonseca (pf@ua.pt)
 * @brief Lê dados de um ficheiro binário
 * @version 0.1
 * @date 2024-12-09
 *
 * @copyright Copyright (c) 2024
 *
 */
#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>

int main() {

  FILE *fp = fopen("array.bin", "rb");
  if (fp == NULL) {
    fprintf(stderr, "Erro a abrir ficheiro.\n");
    return 1;
  }

  struct aluno * array = (struct aluno *)NULL;
  

  int i = 0;
  struct aluno tmp;

  while (fread(&tmp, sizeof(struct aluno), 1, fp)) {
  struct aluno *tmparray;
    tmparray = (struct aluno *)realloc(array, (i + 1) * sizeof(struct aluno));
    if(tmparray == NULL){
      fprintf(stderr,"Problema a alocar memória!\n");
      return 2; 
    }
    array = tmparray;
    array[i] = tmp;
    i++;
  };

  printArray(array, i);

  return 0;
}
