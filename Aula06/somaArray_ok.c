#include <stdio.h>

int somaArray(int *vec, unsigned int size);

int main() {

  int v[5] = {1, 2, 3, 5, 8};

  printf("A soma dos elementos é: %d\n", somaArray(v, 5));

  return 0;
}

int somaArray(int *vec, unsigned int size) {
  int total = 0;
  for (unsigned int i = 0; i < size; i++) {
    total += vec[i];
  }
  return total;
}