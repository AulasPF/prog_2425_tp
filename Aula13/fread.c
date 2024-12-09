#include <stdio.h>

#define MAXSEQSIZE   50

int main() {

  FILE *fp;

  fp = fopen("data.bin", "rb");

  if (fp == NULL) {
    fprintf(stderr, "Erro a abrir o ficheiro!\n");
    return 1;
  }

  int array[MAXSEQSIZE];
  int size;

  size = fread(array,sizeof(int),MAXSEQSIZE,fp); 

  for(int i=0; i< size; i++){
    printf("%3d: %8d\n",i,array[i]);
  }
}