//Atividade de revisão

/*
1. Diferencie compiladores e interpretadores.
O Compilador tem um funcionamento de execução de código diferente do 
interpretador.
Enquanto o interpretador verifica linha por linha e já executa, o compilador verifica o 
código completo antes de executar.
*/

/*
2. Explique o processo de compilação e interpretação.
O processo de compilação ocorre da seguinte forma: O compilador realiza a verificação 
do código por completo para só depois executá-lo, e se existir algum erro no código 
por parte do desenvolvedor o código não é executado.
Enquanto o processo de interpretação acontece da seguinte forma: O interpretador 
verifica e já executa linha por linha do código, caso ele encontre algum erro a execução 
do código é interrompida na onde tem o erro.
*/

/*
3. Exercício prático: Crie um código em uma linguagem de alto nível que use 
uma estrutura condicional if-else para determinar se um número é par ou 
ímpar.
*/
#include <stdio.h>
int main(void) {
 int num;
 scanf("%i", &num);
 if (num % 2 == 0) {
 printf("O número informado é par\n");
 } else {
 printf("O número informado é impar\n");
 }
 return 0;
}

/*
4. Crie um código em uma linguagem de alto nível que use uma estrutura
condicional switch para determinar o dia da semana de um número inteiro.
*/
#include <stdio.h>
int main(void) {
 int dia;
 scanf("%i", &dia);
 switch (dia) {
 case 1:
 printf("Domingo\n");
 break;
 case 2:
 printf("Segunda-feira\n");
 break;
 case 3:
 printf("Terça-feira\n");
 break;
 case 4:
 printf("Quarta-feira\n");
 break;
 case 5:
 printf("Quinta-feira\n");
 break;
 case 6:
 printf("Sexta-feira\n");
 break;
 case 7:
 printf("Sábado\n");
 break;
 default:
 printf("Digite um valor válido para informar o dia da semana\n");
 break;
 }
 return 0;
}

/*
5. Exercício prático: Crie um código em uma linguagem de alto nível que use 
uma estrutura de repetição for para imprimir os números de 1 a 10.
*/
#include <stdio.h>
int main() {
 int count = 0;
 while (count <= 10) {
 printf("%i\n", count);
 count++;
 }
 return 0;
}

/*
6. Faça um programa em C que calcula o produto dos números digitados pelo 
usuário. O programa em C deve permitir que o usuário digite uma quantidade 
não determinada de números. O programa em C encerra quando o usuário 
digita o valor zero.
*/
#include<stdio.h>
int main() {
 int num = 1, produto = 1;
 while (num != 0) {
 scanf("%i", &num);
 if (num != 0)
 produto *= num;
 }
 printf("%i\n", produto);
 return 0;
}

/*
7. Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à
soma de seus divisores positivos diferentes de n. Construa um programa em C 
que verifica se um dado número é perfeito. Ex: 6 é perfeito, pois 1+2+3 = 6
*/
#include <stdio.h>
int main() {
 int num, soma = 0, i;
 scanf("%d", &num);
 for (i = 1; i < num; i++) {
 if (num % i == 0)
 soma = soma + i;
 }
 if (num == soma)
 printf("O numero %d eh perfeito\n", num);
 else
 printf("O numero %d nao eh perfeito\n", num);
}

/*
8. Escreva um programa em C que gera números entre 1000 e 1999 e mostra 
aqueles que divididos por 11 dão resto 5.
*/
#include <stdio.h>
int main() {
 int i;
 for (i = 1000; i <= 1999; i++) {
 if (i % 11 == 5)
 printf("%i\n", i);
 }
 return 0;
}

/*
9. Faça um programa que leia vários conjuntos de três valores reais e mostre 
para cada conjunto: sua soma, seu produto e sua média. O programa para 
quando um conjunto não entrar com seus valores em ordem crescente
*/
#include <stdio.h>
int main() {
 float num1 = 0, num2 = 0, num3 = 0, soma, produto, media;
 while (!(num1 > num2 && num2 > num3)) {
 scanf("%f", &num1);
 scanf("%f", &num2);
 scanf("%f", &num3);
 if (!(num1 > num2 && num2 > num3)) {
 // Calculo da soma
 soma = num1 + num2 + num3;
 // Calculo do produto
 produto = num1 * num2 * num3;
 // Calculo da média
 media = (num1 + num2 + num3) / 3;
 printf("A soma é %f + %f +%f = %f\n", num1, num2, num3, soma);
 printf("O produto é %f + %f +%f = %f\n", num1, num2, num3, produto);
 printf("A média é %f + %f +%f = %f\n", num1, num2, num3, media);
 }
 }
 return 0;
}