
/*
Ler um valor inteiro (aceitar somente valores entre 1 e 10) e escrever
a tabuada de 1 a 10 do valor lido.
*/
#include <stdio.h>

int main(void) {
  int value, i, result;

  scanf("%i", &value);

  if (value < 1 || value > 10) {
    printf("Informar um valor entre 1 e 10");
  } else {

    for (i = 1; i <= 10; i++) {
      result = value * i;
      printf("%i x %i = %i\n", value, i, result);
    }
  }

  return 0;
}

/*
  Leia 50 idades e calcule a média entre as idades (usar uma variável
  para idade).
*/

#include <stdio.h>

int main(void) {
  int age, i, media = 0;

  for (i = 0; i < 50; i++) {
    scanf("%i", &age);

    media += age;
  }

  media = media / 50;

  printf("A média entre as idades é %i\n", media);

  return 0;
}

/*Ler 10 números e imprimir quantos são pares e quantos são ímpares.*/

#include <stdio.h>

int main(void) {
  int num, i;

  for (i = 0; i < 10; i++) {
    scanf("%i", &num);

    if (num % 2 == 0)
      printf("%i é par\n", num);
    else
      printf("%i é impar\n", num);
  }

  return 0;
}

/*
  Faça um programa que calcule o mostre a média aritmética de 15
  notas.
*/
#include <stdio.h>

int main(void) {

  float media = 0, nota = 0;
  int i;

  for (i = 0; i < 15; i++) {
    scanf("%f", &nota);
    media += nota;
  }
  media = media / 15;

  printf("A média das notas informadas é: %.2f\n", media);
  return 0;
}

/*
faça um programa em C que receba 10 números e conte quantos deles
estão no intervalo [10,20] e quantos deles estão fora do intervalo,
escrevendo estas informações.
*/
#include <stdio.h>

int main(void) {

  int num, i, countIntervalo = 0;

  for (i = 0; i < 10; i++) {
    scanf("%i", &num);
    if (num >= 10 && num <= 20)
      countIntervalo++;
  }

  printf("%i números estão dentro do intervalo de [10, 20]", countIntervalo);

  return 0;
}

/*
Faça um programa que peça dois números, base e expoente, calcule e
mostre o primeiro número elevado ao segundo número. Não utilize a
função de potência da linguagem.
*/
#include <stdio.h>

int main() {

  int base, expoente, i, resultado;

  scanf("%i", &base);
  scanf("%i", &expoente);

  resultado = base;
  
  for (i = 1; i < expoente; i++) {
    resultado = base * resultado;
  }

  printf("%i^%i = %i", base, expoente, resultado);

  return 0;
}

/*
  Faça um programa que leia 5 números e informe o maior número
*/
#include <stdio.h>

int main(void) {

  int num, i, maior = 0;

  for (i = 0; i < 5; i++) {
    scanf("%i", &num);

    if (num > maior)
      maior = num;
  }

  printf("O maior valor digitado foi o %i", maior);
  return 0;
}

/*
A série de Fibonacci é formada pela seqüência
1,1,2,3,5,8,13,21,34,55,... Faça um programa capaz de gerar a série até
o n−ésimo termo

*/
#include <stdio.h>

int main() {

  int num, value1 = 0, value2 = 1, nextValue, i;
  scanf("%d", &num);


  for(i = 1; i<=num; i++){
    
    printf("%d ", value1);

    nextValue = value1 + value2;

    value1 = value2;
    value2 = nextValue;
  }
  
  

  return 0;
}