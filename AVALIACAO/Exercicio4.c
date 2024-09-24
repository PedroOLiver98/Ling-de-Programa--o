/*Fazer um programa que receba 2 valores não inteiros do usuário e mostre o maior deles,
 o menor deles e se forem iguais, mostrem a mensagem "Os números são iguais!"*/

#include <stdio.h>
#include <stdlib.h>

main() {
    float num_1, num_2;

    printf("Digite o primeiro valor: ");
    scanf("%f", &num_1);
    
    printf("Digite o segundo valor: ");
    scanf("%f", &num_2);

    if (num_1 > num_2) {
        printf("O maior número é %.2f e o menor número é %.2f.\n", num_1, num_2);
    } else if (num_2 > num_1) {
        printf("O maior número é %.2f e o menor número é %.2f.\n", num_2, num_1);
    } else {
        printf("Os números são iguais!\n");
    }

    return 0;
}