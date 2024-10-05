#include <stdio.h>

/*
nº nulo ou ñ nulo
nº positivo ou negativo
nº par ou ímpar
*/

void main (void)
{
    int numero;

    printf("Indique um número: \n");
    scanf("%d", &numero);

    if (numero == 0) {
        printf("Número nulo.\n");
        } else {
            printf("Número não nulo.\n");   
    }

    if (numero >= 1) {
        printf("Número positivo.\n");
        } else if (numero <= -1){
            printf("Número negativo.\n");
            } else if (numero == 0) {
            printf("O número 0 não é positivo nem negativo.\n");
    }   

    if (numero % 2 == 1 || numero % 2 == -1) {
        printf("Número ímpar.\n");
        } else if (numero == 0) {
            printf("Número 0 não é par nem ímpar.\n");
            } else if (numero % 2 == 0) {
            printf("Número par.\n");
                } else {
                printf("0 não é par nem ímpar.\n");
    }
}