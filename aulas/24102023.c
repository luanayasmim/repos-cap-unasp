#include <stdio.h>
//////////////////////////////////////////////////
void fazSequencia(char valor, int n) {
  int l, c;

  for (l = 0; l < n / 2; l++) {
    for (c = 0; c < n; c++) {
      if (l >= c)
        printf("%c", valor);
      else
        printf("  ");
    }

    printf("\n");
  }

  for (l = n / 2; l < n; l++) {
    for (c = 0; c < n; c++) {
      if (l + c <= n - 1)
        printf("%c", valor);
      else
        printf("  ");
    }
    printf("\n");
  }
}

int main1(void) {

  char valor;
  int vezes;

  printf("Digite um valor para ser impresso:\n");
  scanf(" %c", &valor);

  printf("Informe a quantidade de vezes para a repetição:\n");
  scanf("%i", &vezes);

  fazSequencia(valor, vezes);

  return 0;
}

////////////////////////////////////////
// Lista de exercícios

/*
Escreva uma função que determine se um número inteiro é par. A função deve
retornar verdadeiro se o número for par e falso caso contrário.
*/

int ehPar(int n) {
  if (n % 2 == 0)
    return 1;
  else
    return 0;
}

int main2(void) {

  int n;
  scanf("%i", &n);
  if (ehPar(n))
    printf("True");
  else
    printf("False");

  return 0;
}

/*
Escreva uma função chamada calculaFibonacci que aceita um número inteiro
positivo “n” como parâmetro e retorna o n-ésimo número na sequência de
Fibonacci. A sequência de Fibonacci começa com 0 e 1, e cada número subsequente
é a soma dos dois números anteriores
*/

int fibonacci(int num) {
  int count = 1, value1 = 0, value2 = 1, nextValue;

  while (count <= num) {

    if (count != num)
      printf("%d ", value1);
    else
      printf("%d\n", value1);

    nextValue = value1 + value2;

    value1 = value2;
    value2 = nextValue;

    count++;
  }
}

int main3(void) {

  int n;
  scanf("%i", &n);
  fibonacci(n);

  return 0;
}

/*
Crie uma função chamada verificaPrimo que recebe um número inteiro positivo como
parâmetro e retorna verdadeiro se o número for primo e falso caso contrário. Um
número primo é aquele que é divisível apenas por 1 e por ele mesmo.
*/

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

int main4() {
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

/*
Implemente uma função chamada imprimeTabuada que aceita um número inteiro “n”
como parâmetro e imprime a tabuada desse número de 1 a 10.
*/

void imprimeTabuada(tab) {
  int i;

  printf("\nTabuada do %d\n", tab);
  for (i = 1; i <= 10; i++) {
    printf("%2d x %2d = %2d\n", tab, i, tab * i);
  }
}

int main5(void) {
  int tab;

  scanf("%i", &tab);

  imprimeTabuada(tab);

  return 0;
}

/*
Escreva uma função chamada calculaFatorial que recebe um número inteiro não
negativo “n” como entrada e retorna o fatorial desse número. O fatorial de um
número é o produto de todos os inteiros positivos de 1 a “n”.
*/

int calculaFatorial(int n) {
  int fatorial = 1;
  if (n == 0)
    return 1;
  else {
    while (n > 1) {
      fatorial = fatorial * n;
      n--;
    }
    return fatorial;
  }
}

int main6(void) {
  int n, fatorial;

  do {
    printf("Informe um número natural.\n");
    scanf("%i", &n);
    if (n < 0) {
      printf("O número informado não é natural\n\n");
    }
  } while (n < 0);

  fatorial = calculaFatorial(n);
  printf("n! = %i", fatorial);

  return 0;
}

/*
Crie uma função chamada somaPares que recebe um número inteiro positivo “n” como
parâmetro e retorna a soma de todos os números pares de 1 a “n”.
*/

int somaPares(int n) {

  int i, soma = 0;

  for (i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      soma = soma + i;
    }
  }

  return soma;
}

int main7(void) {

  int n, soma;
  scanf("%i", &n);

  soma = somaPares(n);

  printf("%i", soma);

  return 0;
}

/*
Escreva uma função chamada calculaPotencia que aceita dois números inteiros,
base e expoente, como parâmetros e retorna a base elevada ao expoente
*/
int calculaPotencia(int base, int expoente) {
  int i, resultado;

  resultado = base;

  for (i = 1; i < expoente; i++) {
    resultado = base * resultado;
  }

  return resultado;
}

int main8(void) {

  int base, expoente, resultado;

  printf("Informe a base: ");
  scanf("%i", &base);

  printf("Informe o expoente: ");
  scanf("%i", &expoente);

  resultado = calculaPotencia(base, expoente);

  printf("%i^%i = %i", base, expoente, resultado);

  return 0;
}

/*
Crie uma função chamada somaDigitos que recebe um número inteiro positivo “n”
como parâmetro e retorna a soma de seus dígitos. Por exemplo, se “n” for 12345,
a função deve retornar 15, que é a soma de 1 + 2 + 3 + 4 + 5.
*/

int somaDigitos(int n) {
  int soma = 0;

  while (n > 0) {
    soma += n % 10;
    n /= 10;
  }

  return soma;
}

int main(void) {
  int n, resultado;

  scanf("%i", &n);

  resultado = somaDigitos(n);

  printf("A soma dos dígitos de %d é %d\n", n, resultado);
  return 0;
}