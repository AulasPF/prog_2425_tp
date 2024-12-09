#include <stdio.h>

#define SEQSIZE   40

void createFibonacci(int *data, int size); 

int main() {
  FILE *fp;

  fp = fopen("data.bin","wb");
  
  if(fp == NULL){
    fprintf(stderr,"Erro a abrir o ficheiro!\n");
    return 1; 
  }

  int data[SEQSIZE];

  createFibonacci(data, SEQSIZE); 

  if(fwrite(data, sizeof(int),SEQSIZE, fp) < SEQSIZE){
    fprintf(stderr,"Erro a escrever!\n");
    return 2; 
  }; 

  return 0; 
}

void createFibonacci(int *data, int size){
  data[0] = 1; 
  data[1] = 2; 
  for(int i=2; i<size; i++){
    data[i] = data[i-1]+data[i-2];
  }
} 
