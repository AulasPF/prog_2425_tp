/**
 * @file livrofunc_p.c
 * @author Pedro Fonseca (pf@ua.pt)
 * @brief Versão de livrofunc com ponteiros. A função infoLivro recebe agora um
 * ponteiro para a estrutura livro, não uma cópia (chamada por referência, não
 * por valor)
 * @version 0.1
 * @date 2024-11-03
 *
 * @copyright Copyright (c) 2024
 *
 */

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
void infoLivro(struct livro *pl);

int main() {

  struct livro livro1 = {"Os Lusíadas", "Luís Vaz de Camões", 17.0};
  struct livro livro2 = {"Memorial do Convento", "José Saramago", 14.5};

  infoLivro(&livro1);
  infoLivro(&livro2);

  return 0;
}

void infoLivro(struct livro *pl) {
  printf("--------------------------------------\n");
  printf("Título: %s\n", pl->titulo);
  printf("Autor: %s\n", pl->autor);
  printf("Preço: %.2f\n", pl->preco);
  printf("--------------------------------------\n\n");
}
