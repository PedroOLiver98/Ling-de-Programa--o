#include <stdlib.h>
#include <stdio.h>

int main() {
    for (int i = 0; i <= 1000; i++) {
        if (i % 2 == 0) {
            printf("O Numero %d e par \n", i);
        } else {
            printf("O Numero %d e impar \n", i);
        }
    }
    return 0;
}