#include <stdio.h>

int main (){

    int idade;
    float renda;
    int dependentes;

     printf ("Digite sua idade: ");
     scanf ("%d", &idade);

     if (idade >= 18 && idade <= 65){
        printf ("Digite sua renda mensal: R$ ");
        scanf ("%f", &renda);

        if (renda < 3000){
            printf ("Digite a quantidade de dependentes que você possui: ");
            scanf ("%d", &dependentes);

            if (dependentes >= 3){
                printf ("Parabéns! Você se qualifica em todos os critérios!\n");
            } else{
                printf("Você não se qualifica devido ao número de dependentes!\n");
            }

        } else {
            printf ("Você não se qualifica devido aos critérios de renda!\n");
        }
     } else {
        printf ("Você não se qualifica devido aos critérios de idade!\n");
     }

return 0;
}