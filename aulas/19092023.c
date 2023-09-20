#include <stdio.h>

int main(void){
  int i = 1, n, count = 0, x =1;
  scanf("%d", &n);

  while(x<=n){
    
  while (i <= x) {
    if (x % i == 0) {
      count++;
    }
    i++;
  }

  if (count == 2){
    printf("%d eh primo\n", x);
    count = 0;
  }

  x++;
  }
  return 0;
}

int correcaoExercicio1165(void) {

  int i = 1, n, count = 0;
  scanf("%d", &n);

  while (i < n) {
    if (n % i == 0) {
      count++;
    }
    i++;
  }

  if (count == 2)
    printf("%d eh primo\n", n);
  else
    printf("%d nao eh primo\n", n);

  return 0;
}