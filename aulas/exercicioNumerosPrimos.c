// Criar um programa capaz de receber um valor e mostrar todos os números primos
// até o valor informado
#include <stdio.h>

int VerificaPrimo(int num) {

  int i = 1, count = 0;

  if (num <= 1)
    return 0;

  while (i <= num) {
    if (num % i == 0)
      count++;

    i++;
  }

  if (count == 2)
    return 1;
  else
    return 0;
}

int main() {
  int value, i = 0;
  scanf("%i", &value);
  while (i <= value) {
    if (VerificaPrimo(i))
      printf("%i é um número primo\n", i);
    i++;
  }

  printf("\n");

  return 0;
}