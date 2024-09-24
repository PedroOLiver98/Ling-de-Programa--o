/*Faça um programa que pergunte o nome do usuário e mostre na tela uma mensagem de boas vidas do tipo: 
"Seja bem-vindo (nome informado)!*/

#include <stdio.h>
#include <stdlib.h>

main(){
    char nome[50];
    printf("Digite seu Nome:\n");
    gets(nome);

    printf("Seja bem-vindo(a) %s\n", nome);
        
    return 0;
}