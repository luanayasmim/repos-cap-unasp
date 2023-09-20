#include <stdio.h>
 
int main() {
 
  char nome;
  double salarioFixo, valorVendas, salarioTotal;

  scanf("%s%lf%lf", &nome, &salarioFixo, &valorVendas);

  salarioTotal = salarioFixo + (valorVendas * .15);

  printf("TOTAL = R$ %.2lf\n", salarioTotal);
 
    return 0;
}