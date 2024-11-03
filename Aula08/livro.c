#include <stdio.h>

int main() {

  struct livro {
    char titulo[70];
    char autor[50];
    float preco;
  };

  struct livro l = {"Os Lusíadas", "Luís Vaz de Camões", 17.0};

  printf("--------------------------------------\n");
  printf("Título: %s\n", l.titulo);
  printf("Autor: %s\n", l.autor);
  printf("Preço: %.2f €\n", l.preco);
  printf("--------------------------------------\n");

  return 0;
}
