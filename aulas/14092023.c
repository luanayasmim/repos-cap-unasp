#include <stdio.h>

int main(void) {

  int dia, mes, ano;

  printf("Dia: \n");
  scanf("%d", &dia);
  printf("Mês: \n");
  scanf("%d", &mes);
  printf("Ano: \n");
  scanf("%d", &ano);

  if (dia > 31)
    printf("Dia inválido!");
  else
    switch (mes) {
    case 1:
      printf("%d de Janeiro de %d\n", dia, ano);
      break;
    case 2:
      if (dia <= 29)
        printf("%d de Fevereiro de %d\n", dia, ano);
      else
        printf("Data inválida para o mês de fevereiro\n");
      break;
    case 3:
      printf("%d de Março de %d\n", dia, ano);
      break;
    case 4:
      printf("%d de Abril de %d\n", dia, ano);
      break;
    case 5:
      printf("%d de Maio de %d\n", dia, ano);
      break;
    case 6:
      printf("%d de Junho de %d\n", dia, ano);
      break;
    case 7:
      printf("%d de Julho de %d\n", dia, ano);
      break;
    case 8:
      printf("%d de Agosto de %d\n", dia, ano);
      break;
    case 9:
      printf("%d de Setembro de %d\n", dia, ano);
      break;
    case 10:
      printf("%d de Outubro de %d\n", dia, ano);
      break;
    case 11:
      printf("%d de Novembro de %d\n", dia, ano);
      break;
    case 12:
      printf("%d de Dezembro de %d\n", dia, ano);
      break;
    default:
      printf("Mês inválido!\n");
      break;
    }
  return 0;
}