#include <stdio.h>

int main() {
    int numero;
    int soma = 0;

    /* Explicação inicial para o utilizador */
    printf("Insira números inteiros positivos para somar.\n");
    printf("Para terminar, insira um número negativo.\n");

    /* O ciclo while continua enquanto o número for maior ou igual a zero */
    printf("Insira um número: ");
    scanf("%d", &numero);

    while (numero >= 0) {
        soma += numero;  /* Adiciona o número à soma */
        printf("Insira outro número: ");
        scanf("%d", &numero);  /* Lê o próximo número */
    }

    /* Exibe o resultado final */
    printf("A soma dos números inseridos é: %d\n", soma);

    return 0;
}
