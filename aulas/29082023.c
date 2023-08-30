#include <stdio.h>

int main(void) {

  int num;
  
  printf("Digite um valor:\n");
  scanf("%d", &num);
  printf("%d",num);
  
  if (num % 2 == 0) {
    num *= 100;
    printf("O número é par\n O resultado é:\n %d", num);
  } else {
    num *= 50;
    printf("O número é ímpar\n O resultado é:\n %d", num);
  }

  // if ternário () ? instrução 1: instrução 2
   num *= (num%2==0) ? 100 : 50;
  return 0;
}