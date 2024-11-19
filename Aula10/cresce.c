#include <stdio.h>
#include <stdlib.h>

int main() {

  /* arraySize guarda o tamanho do array */
  /* O valor inicial é 5 */
  unsigned int arraySize = 5;

  /* Cria array inicialmente com 5 posições */
  double *pVal = calloc(arraySize, sizeof(double));

  unsigned int currentItem = 0;

  double tmp;

  printf("Val?");
  scanf("%lf", &tmp);

  while (tmp != 0.0) {
    pVal[currentItem] = tmp;
    currentItem++;
    if (currentItem == arraySize) {
      /* Incrementa arraySize */
      arraySize += 5;
      printf("Tamanho agora é %d\n",arraySize);
      pVal = realloc(pVal, arraySize*sizeof(double));
    }
    printf("Val?");
    scanf("%lf", &tmp);
  }

  for(unsigned int i=0; i<currentItem; i++){
    printf("%3d: %8.2lf\n",i,pVal[i]);
  }

  free(pVal); 
  
}