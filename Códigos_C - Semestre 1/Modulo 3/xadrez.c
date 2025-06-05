#include <stdio.h>

void moverTorre (int casas){
    if (casa > 0){
        printf ("Direita\n");
        moverTorre (casas - 1);
    }
}


int main (){

    moverTorre(5); // torre anda 5 casas para direita.
    return 0;

}