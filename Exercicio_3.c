#include <stdio.h>
#include <stdlib.h>

/*3- Escreva um programa que pergunte ao usuário quantos alunos tem na sala.
Em seguida, através de um laço FOR, pede ao usuario para que entre com as notas de todos os alunos da sala, um por vez
Por fim, o programa deve mo0strar a média arimetica, da turma*/

main(){
    int aluno = 1,i,soma = 0;
    float nota,media;

    printf("Quantos alunos ha na sala? \n");
    scanf("%d", &aluno);

    for (i = 0; i < aluno; i++){
        printf("Informe o valor da nota do aluno %d: \n", i + 1 );
        scanf("%f", &nota);
        soma +=nota;
    }
    media = (float)soma / aluno;

    printf("A media da turma e: %.2f\n", media);

    return 0;
}