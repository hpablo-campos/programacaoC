# include <stdio.h> 

int main (){

    int opcao;
    float saldo = 3500.00;
    float deposito, saque;

    printf ("*** ESCOLHA OPÇÃO DIGITANDO O NÚMERO CORRESPONDENTE ***\n");
    printf ("1 - Consultar saldo\n");
    printf ("2 - Depósito\n");
    printf ("3 - Saque\n");
    printf ("0 - Encerrar\n");
    printf ("Digite aqui a opção: ");

    scanf ("%d", &opcao);

    switch (opcao) {
        case 1:
            printf ("Seu saldo atual é: R$ %.2f\n", saldo);
        break;

        case 2:
            printf ("Digite o valor a ser depositado: R$ ");
            scanf ("%f", &deposito);
            saldo = saldo + deposito;
            printf ("Valor depositado com sucesso!\n");
            printf ("Seu saldo atual é: R$ %.2f\n", saldo);
        break;

        case 3:
            printf ("Saldo atual: R$ %.2f\n", saldo);
            printf ("Digite o valor a ser sacado: ");
            scanf ("%f", &saque);
            saldo = saldo - saque;
            printf ("Seu saldo atual é: R$ %.2f\n", saldo);
        break;

    case 0:
        printf ("Programa encerrado!");
        break;

    default:
        printf ("Opção inválida!\n");
        break;
    }
    
    return 0;
}