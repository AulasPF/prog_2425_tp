#include <stdio.h>

int main() {

  FILE *fp;

  fp = fopen("data.bin", "rb");

  if (fp == NULL) {
    fprintf(stderr, "Erro a abrir o ficheiro!\n");
    return 1;
  }

  int array[50];
  int size;

  size = fread(array,sizeof(int),50,fp); 

  for(int i=0; i< size; i++){
    printf("%3d: %8d\n",i,array[i]);
  }
}