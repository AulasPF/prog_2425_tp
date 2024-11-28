#include <stdio.h>

void swapInt(int *pa, int*pb){
  int tmp = *pa; 
  *pa=*pb;
  *pb=tmp; 
}

void mostraArray(int *a, unsigned int size){
  for(unsigned int i = 0; i<size;i++){
    printf("#%2d: %d\n",i,a[i]);
  }
}

int main(){

  int array[10] = { 4, 5,12,3,2,1,7,15,11,8};

  printf("Antes:\n");
  mostraArray(array, 10); 

  /* Código para ordenar o array */

  printf("Depois:\n");
  mostraArray(array, 10); 

}