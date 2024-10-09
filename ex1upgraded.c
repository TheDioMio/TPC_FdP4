#include <stdio.h>

void main (void)
{
    int numero;

    printf("Indique um número:\n");
    scanf("%d", &numero);

    if (numero == 0) {
        printf("Número nulo.");
            } else if (numero < 0) {
                 printf("Ímpar");
                    } else {
                        printf("Par"); 
                             
    } 

    if (numero % 2 == 0) {
        printf("Número par");
         } else {
            printf("Número ímpar");
    }

}