#include <stdio.h>

int main (){

  float temperatura, umidade;
  unsigned int estoque;

  printf ("Digite a temperatura: \n");
  scanf ("%f", &temperatura);

  printf ("Digite a umidade: \n");
  scanf ("%f", &umidade);

  printf ("Digite o estoque: \n");
  scanf ("%u", &estoque);

  if (temperatura <= 21){
    printf ("A temperatura está dentro dos parâmetros\n");
  } else {
    printf ("A temperatura está muito elevada!\n");
  }

  if (umidade > 50){
    printf ("Umidade elevada!\n");
  } else {
    printf ("Umidade está dentro dos parâmetros.\n");
  }

  if (estoque < 50){
    printf ("Estoque muito baixo!\n");
  } else {
    printf ("Estoque dentro dos parâmetros\n");
  }

return 0;
}