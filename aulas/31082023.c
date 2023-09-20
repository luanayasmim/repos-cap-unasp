#include <stdio.h>

int main(void){

  exercicio1();
  exercicio2();
  exercicio3();
  exercicio4();
  exercicio5();
  return 0;
}


/*
    1. Faça um algoritmo que receba dois números, e em seguida leia a operação
   (“+”, “–“, “x”, “/”), no final mostrar o resultado da operação escolhida;
  */
int exercicio1(void) {
  int num1, num2, resultado;
  char operacao;

  printf("Digite o primeiro número:\n");
  scanf("%i", &num1);

  printf("Digite o segundo número:\n");
  scanf("%i", &num2);

  printf("Digite o tipo da operação: +, -, x, /:\n");
  //Colocar um espaço antes de ler um char, caso exista uma leitura de outra variável anterior
  scanf(" %c", &operacao);

  if (operacao == '+') {
    resultado = num1 + num2;
    printf("%i\n", resultado);
  } else if (operacao == '-') {
    resultado = num1 - num2;
    printf("%i\n", resultado);
  } else if (operacao == 'x' || operacao == 'X') {
    resultado = num1 * num2;
    printf("%i\n", resultado);
  } else if (operacao == '/') {
    resultado = num1 / num2;
    printf("%i\n", resultado);
  } else
    printf("Operação inválida!\n");

  return 0;
}


/*
  2. Escrever um algoritmo que leia o nome e as três notas obtidas por um aluno
  durante o semestre. Calcular a sua média (aritmética), informar o nome e sua
  menção aprovado (media >= 7), Reprovado (media <= 5) e Recuperação (media
  entre 5.1 a 6.9)
*/
int exercicio2(void) {
  char nome[100];
  int nota1, nota2, nota3;
  float media;

  printf("Informe o nome do aluno:\n");
  scanf(" %s", nome);

  printf("Informe a primeira nota:\n");
  scanf("%i", &nota1);
  printf("Informe a segunda nota:\n");
  scanf("%i", &nota2);
  printf("Informe a terceira nota:\n");
  scanf("%i", &nota3);

  media = (nota1 + nota2 + nota3) / 3;

  if (media >= 7)
    printf("O aluno(a): %s foi aprovado. Média: %.1f\n", nome, media);
  else if (media <= 5)
    printf("O aluno(a): %s foi reprovado. Média: %.1f\n", nome, media);
  else if (media >= 5.1 && media <= 6.9)
    printf("O aluno(a): %s está de recuperação. Média: %.1f\n", nome, media);
  
  return 0;
}

// 3. Escrever um algoritmo que leia dois valores inteiros distintos e informe
// qual é o maior.
int exercicio3(void) {
  int num1, num2;

  printf("Informe o primeiro valor:\n");
  scanf("%i", &num1);
  printf("Informe o segundo valor:\n");
  scanf("%i", &num2);

  if (num1 == num2)
    printf("Os valores precisam ser diferentes!\n");
  else if (num1 > num2)
    printf("O número 1 é maior\n");
  else if (num2 > num1)
    printf("O número 2 é maior\n");

  return 0;
}

/*
4. Elabore um algoritmo que leia dois números inteiros e mostre o resultado da
diferença do maior valor pelo menor;
*/
int exercicio4(void) {
  int num1, num2, diferenca;

  printf("Informe o primeiro valor:\n");
  scanf("%i", &num1);
  printf("Informe o segundo valor:\n");
  scanf("%i", &num2);

  if (num1 == num2)
    printf("Os valores são iguais!\n");
  else if (num1 > num2) {
    diferenca = num1 - num2;
    printf("A diferença do número: %i e número: %i é %i\n", num1, num2,
           diferenca);

  } else if (num2 > num1) {
    diferenca = num2 - num1;
    printf("A diferença do número: %i e número: %i é %i\n", num2, num1, diferenca);
  }

  return 0;
}

// 5. Criar um algoritmo que diz que um número é divisível por 4 ou 5.
int exercicio5(void) {
  int num;
  float divisao;

  printf("Informe um valor:\n");
  scanf("%i", &num);

  if (num % 4 == 0)
    printf("Número divisível por 4\n");
  else if (num % 5 == 0)
    printf("Número divisível por 5\n");

  return 0;
}
