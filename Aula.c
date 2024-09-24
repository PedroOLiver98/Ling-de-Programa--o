#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

main(){
    int idade;
    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    if (idade>70){
        printf("Voce pertence a melhor idade");
}
    else 
        if (idade>21){
        printf("Voce pertence a idade adulta");
}
    else 
        printf("Voce pertence a idade jovem");
}