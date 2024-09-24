/*Faça um programa que receba via teclado  o nome, endereço, telefone e imprimir na tela as informações recebidas.*/

#include <stdio.h>
#include <stdlib.h>

main(){
    char nome[50];
    char endereco[50];
    int telefone;
    printf("Digite seu Nome:\n");
    gets(nome);

    printf("Digite seu Endereço:\n");
    gets(endereco);

    printf("Digite seu Telefone:\n");
    scanf("%d", &telefone);

    printf("Nome: %s\n", nome); 
    printf("Endereço: %s\n", endereco);
    printf("Telefone: %d\n", telefone);
        
    return 0;
}