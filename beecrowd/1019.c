#include <stdio.h>

int main(void){

  int segundos= 0 , minutos = 0, horas = 0;

  scanf("%i", &segundos);

  minutos = segundos / 60;
  horas = minutos / 60;
  minutos = (segundos / 60) - (horas * 60);
  segundos = segundos % 60;

  printf("%i:%i:%i", horas, minutos, segundos);
  
  return 0;
}
