#include <stdio.h>

int main (){

  // declaração de variáveis
  int estoque;

  // leitura do estoque
  printf ("Digite o estoque: ");
  scanf ("%d", &estoque);

  // verificação do estoque
  if (estoque < 5){
    printf ("Estoque baixo!\n");
  } else {
    printf ("Estoque normal!\n");
  }

return 0;
}