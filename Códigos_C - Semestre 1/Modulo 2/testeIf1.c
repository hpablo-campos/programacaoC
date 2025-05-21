#include <stdio.h>

int main (){

    // declaração de variáveis
    int num1, num2;

    num1 = 5;
    num2 = 5;

    if (num1 > num2){
        printf ("num1 é maior que num2\n");
    } else if (num1 < num2){
        printf ("num1 é menor que num2\n");
    } else {
        printf ("num1 é igual a num2\n");
    }

return 0;
}