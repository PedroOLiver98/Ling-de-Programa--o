#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int notas [2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Digite a nota:");
            scanf("%d", &notas[i][j]);
        }
        
    }
    notas [0][1] = 150;
    printf("*********Saida de dados*********");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
        {
            printf("\n Nota[%d][%d] = %d \n" ,i, j, notas[i][j]);
        }
        
    }
    return 0;
    
}