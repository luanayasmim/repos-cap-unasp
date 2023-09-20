#include <stdio.h>
 
int main() {
 
  int numFuncionario, horasTrabalhadas;
  double salarioHora, salarioTotal;

  scanf("%d%d%lf", &numFuncionario, &horasTrabalhadas, &salarioHora);

  salarioTotal = horasTrabalhadas * salarioHora;

  printf("NUMBER = %d\n", numFuncionario);
  printf("SALARY = U$ %.2lf\n", salarioTotal);
 
    return 0;
}