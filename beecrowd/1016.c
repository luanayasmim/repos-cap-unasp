#include <stdio.h>
 
int main() {
 
  int distancia, minutos;
  scanf("%d", &distancia);

  minutos = (60 * distancia) / 30;

  printf("%d minutos\n", minutos);
    return 0;
}