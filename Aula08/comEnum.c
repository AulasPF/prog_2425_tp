#include <stdio.h>

enum diasSemana { DOM, SEG, TER, QUA, QUI, SEX, SAB };

void escreveNomeDiaDaSemana(enum diasSemana dia) {
  switch (dia) {
  case DOM:
    printf("Domingo");
    break;

  case SEG:
    printf("Segunda-feira");
    break;

  case TER:
    printf("Terça-feira");
    break;

  case QUA:
    printf("Quarta-feira");
    break;

  case QUI:
    printf("Quinta-feira");
    break;

  case SEX:
    printf("Sexta-feira");
    break;

  case SAB:
    printf("Sábado");
    break;
  }
}

int main() {

  enum diasSemana hoje = QUA;

  printf("Hoje é ");
  escreveNomeDiaDaSemana(hoje);
  printf("\n");
}