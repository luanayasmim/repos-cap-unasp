#include <stdio.h>

int main(void) {
  int num1, num2, soma, subtracao, multiplicacao;
  double divisao;

  printf("Digite um valor\n");
  scanf("%d", &num1);

  printf("Digite um valor\n");
  scanf("%d", &num2);

  soma = num1 + num2;
  subtracao = num1 - num2;
  multiplicacao = num1 * num2;
  divisao = num1 / num2;

  printf("A soma é: %d\n", soma);
  printf("A subtração é: %d\n", subtracao);
  printf("A multiplicação é: %d\n", multiplicacao);
  printf("A divisão é %.1lf", divisao);

  return 0;
}