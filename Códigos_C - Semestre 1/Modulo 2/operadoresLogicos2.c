# include <stdio.h> 

int main (){

    int numero, par;

    printf("Digite um número: ");
    scanf ("%d", &numero);

    if (numero > 0){
        printf ("O número %d é positivo!\n", numero);

    } else if (numero == 0){
        printf ("O número é Zero!\n");

    } else {
        printf ("O número %d é negativo!\n", numero);
    }














    return 0;
}