/**
 * @file livrofunc2.c
 * @author Pedro Fonseca (pf@ua.pt)
 * @brief  Exemplo de uma função que altera o valor dos campos de uma struct
 * @version 0.1
 * @date 2024-11-03
 * 
 * Este programa faz o mesmo que livrofunc.c, mas agora a inicialização das 
 * structs livro é feita por uma função, e não "inline" na sua declaração. 
 *
 * ============================================================================
 *  NOTA IMPORTANTE: 
 *  Este programa, tal como está, não funciona!
 *  Tem um erro que é necessário corrigir.
 * ============================================================================
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
void initLivro(struct livro l, const char *tit, char *aut, float preco);

int main() {

  /* cria as estruturas livro1 e livro2 */
  struct livro livro1, livro2;

  /* Inicializa as estruturas recorrendo a initLivro() */
  initLivro(livro1, "Os Lusíadas", "Luís Vaz de Camões", 17.0);
  initLivro(livro2, "Memorial do Convento", "José Saramago", 14.5);

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

void initLivro(struct livro l, const char *tit, char *aut, float preco) {
  strcpy(l.titulo, tit);
  strcpy(l.autor, aut);
  l.preco = preco;
}
