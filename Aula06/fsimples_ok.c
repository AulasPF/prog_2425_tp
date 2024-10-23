#include <stdio.h>

float media2(int a, int b);

int main() {

  printf("Exemplo simples de uso de uma função.\n");

  int n1, n2;

  printf("Valores: ");
  scanf("%d", &n1);
  scanf("%d", &n2);

  float resultado;

  resultado = media2(n1, n2);

  printf("Média de %d + %d é %f\n", n1, n2, resultado);

  /* Também podia ser assim: */
  printf("Média de %d + %d é %f\n", n1, n2, media2(n1,n2));

  return 0;
}

float media2(int a, int b) {
  float res;
  res = (a + b) / 2.0;
  return res;
}
