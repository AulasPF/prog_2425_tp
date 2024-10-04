/**
 * @file array01.c
 * @author Pedro Fonseca (pf@ua.pt)
 * @brief 
 * @version 0.1
 * @date 2024-10-04
 * 
 * @copyright Copyright (c) 2024
 * 
 * Cria um array com cinco posições e guarda valores no array.
 * Acede aos elementos através do índice.
 */

#include <stdio.h>

int main(){

  int myArray[5];

  myArray[0] = 0; 
  myArray[1] = 1; 
  myArray[2] = 1; 
  myArray[3] = 2;
  myArray[4] = 3; 

  /* Imprime o valor dos elementos do array: */
  for(int i=0; i<5; i++){
    printf("%d ",myArray[i]);
  }
  printf("\n");

  /* Acrescente o código necessário para que, quando o programa correr
   * a instrução printf() em baixo, a sequência impressa passe a ser
   * 0 1 2 2 4
   * Ou seja, quer-se alterar o valor da terceira e quinta posição do array 
   */

  /* Imprime o valor dos elementos do array: */
  /* Quando correr esta parte do código, os valores impressos devem ser */
  /* 0 1 2 2 4 */
  for(int i=0; i<5; i++){
    printf("%d ",myArray[i]);
  }
  printf("\n");


  return 0; 

}