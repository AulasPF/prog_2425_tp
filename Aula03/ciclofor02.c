/**
 * @file ciclo02.c
 * @author Pedro Fonseca (pf@ua.pt)
 * @brief  Ciclos: uso de inteiros, não floats
 * @version 0.1
 * @date 2024-09-28
 *
 * @copyright Copyright (c) 2024
 *
 * Pretende-se imprimir os números de 0 a 2, em incrementos de 0.1:
 * 0, 0.1, 0.2, ...., 2.0
 */

#include <stdio.h>

int main() {

  float x;

  for (x = 0; x <= 2.0; x += 0.1) {
    printf("%f\n", x);
  }
}