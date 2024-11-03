#include <stdio.h>

struct livro {
  char titulo[70];  
  char autor[50];
  float preco;
};

/**
 * @brief Apresentação informação sobre um livro
 * 
 * @param l   Livro a apresentar
 */
void infoLivro(struct livro l);

int main() {

  struct livro livro1 = {"Os Lusíadas", "Luís Vaz de Camões", 17.0};
  struct livro livro2 = {"Memorial do Convento", "José Saramago", 14.5};

  infoLivro(livro1);
  infoLivro(livro2);

  return 0;
}

void infoLivro(struct livro l) {
  printf("--------------------------------------\n");
  printf("Título: %s\n", l.titulo);
  printf("Autor: %s\n", l.autor);
  printf("Preço: %.2f\n", l.preco);
  printf("--------------------------------------\n\n");
}
