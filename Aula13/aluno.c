#include <stdio.h>
#include <string.h>
#include "aluno.h"


void preencheArray(struct aluno *array, int size) {

  /* Alguns nomes para encher */
  char nomes[20][30] = {"Ana",      "Bruno",    "Carlos",  "Daniela", "Eduardo",
                        "Fernanda", "Gabriel",  "Helena",  "Igor",    "Joana",
                        "Karla",    "Lucas",    "Mariana", "Nuno",    "Olivia",
                        "Pedro",    "Quintino", "Rita",    "Sofia",   "Tiago"};

  for (int i = 0; i < size; i++) {
    struct aluno tmp;
    tmp.ID = 101 + i;
    strcpy(tmp.nome, nomes[i % 20]);
    array[i] = tmp;
  }
}

void printArray(struct aluno *array, int size) {
  for (int i = 0; i < size; i++) {
    printf("Reg.: %2d\n", i);
    printf(" - ID: %2d\n - Nome: %s\n\n", array[i].ID, array[i].nome);
  }
}