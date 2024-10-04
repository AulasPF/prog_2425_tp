/**
 * @file array_size.c
 * @author Pedro Fonseca (pf@ua.pt)
 * @brief   Uso do operador sizeof para obter tamanho de um array
 * @version 0.1
 * @date 2024-10-04
 * 
 * @copyright Copyright (c) 2024
 * 
 */
 #include <stdio.h>

 int main(){

  int myArray[] = {0, 1, 1, 2, 3};

  printf("Tamanho de myArray: %ld\n", sizeof(myArray));


 }