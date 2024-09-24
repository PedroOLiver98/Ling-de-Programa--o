#include <stdio.h>
#include <stdlib.h>

/*2- Escreva um programa que pergunta um número ao usuário, e mostra swua tabuada completa (de 1 até 10).*/

main() {
    int num, i;

    // Solicita ao usuário que informe o valor
    printf("Informe o valor: ");
    scanf("%d", &num);

    // Exibe a tabuada de 0 a 10
    printf("Tabuada de %d:\n", num);
    for (i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}