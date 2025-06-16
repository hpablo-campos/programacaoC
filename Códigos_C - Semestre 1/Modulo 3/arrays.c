#include <stdio.h>

int main (){

    int vetor[5] = [1, 2, 3, 4, 5];
    int soma = 0;

    for (int i = 0; i <5; i++){
        soma += vetor[i];
    }
    
    printf ("%d", soma);
    return 0;
}