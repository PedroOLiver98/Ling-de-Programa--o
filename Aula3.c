#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    int idade;

    // Solicita a idade do usuário
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

switch (idade)
{
case 0 ... 11:
    printf("Criança");
    break;
case 12 ... 17:
    printf("Adolescente");
    break;
case 18 ... 64:
    printf("Adulto");
    break;
case 65 ... 150:
    printf("Idoso");
    break;

default: printf("Idade invalida \n");
    break;
}

}