/**
 * @file atrib01b.c
 * @author Pedro Fonseca (pf@ua.pt)
 * @brief  Código para teste dos comandos de atribuição
 * @version 0.1
 * @date 2024-09-28
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>

int main() {

  int a, b=3;

  a = 4 + (b == 3);

  printf("a=%d\nb=%d\n", a, b);

  a++;
  b /= 2;

  printf("a=%d\nb=%d\n", a, b);
}
