/**
 * @file livrofunc3.c
 * @author Pedro Fonseca (pf@ua.pt)
 * @brief  Exemplo de uma função que define o valor dos campos de uma struct e
 * devolve essa struct
 * @version 0.1
 * @date 2024-11-03
 *
 * Este programa faz o mesmo que livrofunc.c, mas a inicialização dos valores
 * dos campos das estruturas do tipo livro é feita numa struct criada na função
 * e que é devolvida por esta.
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <stdio.h>
#include <string.h>

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

/**
 * @brief Inicializa uma estrutura do tipo livro com os argumentos passados na
 * chamada.
 *
 * @param pl      Ponteiro para a estrutura a preencher
 * @param tit     Título do livro
 * @param aut     Autor do livro
 * @param preco   Preço do livro
 */
struct livro initLivro3(char *tit, char *aut, float preco);

int main() {

  /* cria as estruturas livro1 e livro2 */
  struct livro livro1, livro2;

  /* Inicializa as estruturas recorrendo a initLivro3() */
  livro1 = initLivro3("Os Lusíadas", "Luís Vaz de Camões", 17.0);
  livro2 = initLivro3("Memorial do Convento", "José Saramago", 14.5);

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

struct livro initLivro3(char *tit, char *aut, float preco) {

  /* Cria uma estrutura livro */
  struct livro l;

  /* Preencher os campos com os valores passados nos argumentos */
  strcpy(l.titulo, tit);
  strcpy(l.autor, aut);
  l.preco = preco;

  /* Devolve a estrutura para uso do código que chamou a função */
  return l;
}
