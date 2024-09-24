/*Fazer um aplicativo que receba do usuario a base a altura de um triagunlo e devolva a rea do triangulo retangulo.
Formula da area do triangulo
Retangulo = Base*altura/2*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float base, altura, area;

    printf("Digite o valor da Base do Triangulo: ");  /*Informa na tela uma pergunta para o usuario informar um valor expecifico*/
    scanf("%f", &base);

    printf("Digite o valor da Altura do Triangulo: "); /*Informa na tela uma pergunta para o usuario informar um valor expecifico*/
    scanf("%f", &altura);

    area = base * altura/2;

    printf("A área do Triangulo é: %6.2f", area);

    return 0;
}
