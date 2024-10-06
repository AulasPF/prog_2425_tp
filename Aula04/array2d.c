/**
 * @file array2d.c
 * @author your name (you@domain.com)
 * @brief Construção de uma matriz bidimensional
 * @version 0.1
 * @date 2024-10-04
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>

int main() {

  int m[2][3] = {{1, 2, 3}, {4, 5, 6}};

  /* Impressão do valor de uma posição da matriz, por linha e coluna: */

  int linha = 1;  /* linha = 1 significa 2.ª linha (índice começa em zero)*/
  int coluna = 2; /* coluna = 2 significa 3.ª coluna (índice começa em zero)*/

  printf("m[%d][%d]=%d\n", linha+1, coluna+1, m[linha][coluna]);
  /* NOTA: +1 somado à linha e à coluna, para tornar a numeração "natural" */

  /* Impressão da matriz completa: */

  printf("\nMatriz:\n");
  for (linha = 0; linha < 2; linha++) {
    for (coluna = 0; coluna < 3; coluna++) {
      printf("%8d", m[linha][coluna]);
    }
    printf("\n");
  }

  /* E como mostrar a matriz transposta?... */

  printf("\nMatriz transposta:\n"); 

  /* Inserir o código aqui. */

  return 0;
}