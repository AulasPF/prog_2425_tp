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

  struct estudante estudante3;

  estudante3 = estudante2;  /* Os dados de estudante2 são copiados para estudante3 */

  printf("Estudante %s tem %d anos e teve uma nota de %.1f.\n", estudante3.nome,
         estudante3.idade, estudante3.nota);
}