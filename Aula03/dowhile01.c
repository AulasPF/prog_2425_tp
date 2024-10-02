#include <stdio.h>

int main() {
    int numero;

    /* O ciclo do...while garante que o utilizador será solicitado a inserir um número 
       pelo menos uma vez, validando depois o valor introduzido */
    do {
        printf("Insira um número positivo: ");
        scanf("%d", &numero);

        if (numero < 0) {
            printf("Número inválido! Tente novamente.\n");
        }
    } while (numero < 0);  /* O ciclo continua enquanto o número for negativo */

    /* Exibe o número válido inserido */
    printf("Número válido inserido: %d\n", numero);

    return 0;
}
