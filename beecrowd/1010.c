#include <stdio.h>
 
int main() {
 
  int codPeca1, qtdPeca1, codPeca2, qtdPeca2;
  double valorPeca1, valorPeca2, totalPagar;

  scanf("%d %d %lf \n", &codPeca1, &qtdPeca1, &valorPeca1);
  scanf("%d %d %lf \n", &codPeca2, &qtdPeca2, &valorPeca2);

  totalPagar = (valorPeca1 * qtdPeca1) + (valorPeca2 * qtdPeca2);

  printf("VALOR A PAGAR: R$ %.2lf\n", totalPagar);
 
    return 0;
}