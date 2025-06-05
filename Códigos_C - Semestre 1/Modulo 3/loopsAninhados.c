#include <stdio.h>

void recursive(int numero)  {
    if (numero > 0){
        
        printf("%d ", numero);
        recursive(numero - 1);
        
    }
}

int main (){

    int quantidade = 5;

    //scanf("%d", &quantidade);
    recursive(quantidade);

    return 0;
}