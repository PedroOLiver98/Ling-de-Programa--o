#include <stdio.h>
#include <stdlib.h>

/*1- Escreva um programa em C que solciita 10 números ao usuário,
 atraves de um Laço FOR, e ao final mostre qual destes Números é o maior*/

main(){
    int i,number,maior;
    for (i = 1; i <= 10; i++)
    {
        printf("Informe um Numero \n");
        scanf("%d", &number);
        maior = number;
        if (number > maior) {
            maior = number;
        }
    }

    printf("O maior numero informado foi: %d\n", maior);

    return 0;
}
