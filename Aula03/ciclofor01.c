/**
 * @file ciclo01.c
 * @author Pedro Fonseca (pf@ua.pt)
 * @brief Código para teste dos comandos de ciclo
 * @version 0.1
 * @date 2024-09-28
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>

int main(void) {
  int i;

  for (i = 0; i < 5; i++) {
    printf("%d\n", i);
  }

  printf("Fora do ciclo: i=%d\n", i);
}