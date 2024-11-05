#include <stdlib.h>
#include <stdio.h>

int main() {
    int i, number, maior, menor;

    // Chamar o primeiro número
    printf("Informe um Digito númerico \n");
    scanf("%d", &number);
    maior = number;  // Inicializa `maior` com o primeiro número inserido
    menor = number;  // Inicializa `menor` com o primeiro número inserido

    // Para os próximos 9 números
    for (i = 2; i <= 10; i++) {
        printf("Informe um Digito númerico \n");
        scanf("%d", &number);

        if (number > maior) {
            maior = number;  // Atualiza `maior` se o novo número for maior
        }
        if (number < menor) {
            menor = number;  // Atualiza `menor` se o novo número for menor
        }
    }

    printf("O maior numero informado foi: %d\n", maior);
    printf("O menor numero informado foi: %d\n", menor);

    return 0;
}