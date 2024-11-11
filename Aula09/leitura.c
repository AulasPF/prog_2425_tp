#include <stdio.h>

int main() {

  char linha[100]; /* Buffer para armazenar uma linha do ficheiro */

  while (fgets(linha, sizeof(linha), fp) != NULL) {
    printf("%s", linha);
  }


  return 0; 
}