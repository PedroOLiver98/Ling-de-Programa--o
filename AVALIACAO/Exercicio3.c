/*Faça um programa que leia 5 números e informe o maior número.
**/
#include <stdio.h>
#include <stdlib.h>

main(){
    int i,numero;
    int maior=0;
    for (i = 1; i <= 5; i++) {
        printf("Informe um Numero \n");
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero; 
        }
    }

    printf("O maior numero informado foi: %d\n", maior);

    return 0;
}