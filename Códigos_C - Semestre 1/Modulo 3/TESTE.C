#include <stdio.h>

int main (){

    int controle = 1, num, menor;

    for (int cont = 1; cont <= 20; cont++){
        scanf("%d", &num);
        if (controle == 1){
            menor = num; // Inicializa o menor número com o primeiro valor lido.
            else if (num < menor) {
                menor = num; // Atualiza o menor número se o atual for menor.
            }
        }
        controle++;
    }



    return 0;
}