#include <stdio.h>

int main() {
  int diasRecebidos=0, dia=0, mes=0, ano=0;
  scanf("%i", &diasRecebidos);
    
  while(diasRecebidos>=365){
     diasRecebidos-=365;
     ano++;
  }

  while(diasRecebidos>=30){
    diasRecebidos-=30;
    mes++;
  }

  dia=diasRecebidos;
  
  printf("%i ano(s)\n", ano);
  printf("%i mes(es)\n", mes);
  printf("%i dia(s)\n", dia);
  
  return 0;
}