#include <stdio.h>
#include <stdlib.h>

double *criaArray(unsigned int n);

int main() {
  double *pval;
  unsigned int nElem;

  printf("Numero de elementos?");
  scanf("%d", &nElem);

  pval = criaArray(nElem);

  pval[nElem - 1] = 1 / 3;

  printf("O valor é: %lf\n", pval[nElem - 1]);

  free(pval);
}

double *criaArray(unsigned int n) {

  double *plocal;

  plocal = malloc(n * sizeof(double));

  return plocal;
}