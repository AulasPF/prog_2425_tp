/**
 * @file structs.c
 * @author Pedro Fonseca (pf@ua.pt)
 * @brief Exemplo de utilização de uma struct
 * @version 0.1
 * @date 2024-11-02
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <stdio.h>
#include <string.h>

int main() {

  struct estudante {
    char nome[30];
    int idade;
    double nota;
  } estudante1;

  struct estudante estudante2;

  strcpy(estudante2.nome, "Maria Antónia");
  estudante2.idade = 21;
  estudante2.nota = 14.5;

  printf("Estudante %s tem %d anos e teve uma nota de %.1f.\n", estudante2.nome,
         estudante2.idade, estudante2.nota);
}