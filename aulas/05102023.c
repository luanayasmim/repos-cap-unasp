#include <stdio.h>

int main(void) {
  float saque, saldo = 20000;

  do {
    printf("Quanto você deseja sacar?\n");

    scanf("%f", &saque);

    if (saque <= 0) {
      printf("Valor não aceito!\n");
      printf("Saldo atual: R$ %.2f\n", saldo);
    } else if (saque <= saldo) {
      saldo -= saque;
      printf("Saldo atual: R$ %.2f\n", saldo);
    } else {
      printf("Valor não disponivel para o saque!\n");
      printf("Saldo atual: R$ %.2f\n", saldo);
    }

  } while (saldo > 0);

  return 0;
}