#include <stdio.h>

int main (){

  // declaração de variáveis
  float temp;
    
  printf ("Digite a temperatura: ");
  scanf ("%f", &temp);

  if (temp > 30.0){
    printf ("Está calor!\n");
  } else if (temp < 20.0){
    printf ("Está frio!\n");
  } else {
    printf ("Está agradável!\n");
  }

return 0;
}