#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um algoritmo para calcular a somatória, a soma dos quadrados e a média dos n
primeiros números naturais.   */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int num, soma = 0, soma2 = 0, media, cont, x;
	printf ("Insira a quantidade de números inteiros positivos desejada:\n");
	scanf ("%d", &num);
	x = num;
	for (cont = 1; cont <= x; cont++, num--){
		soma = soma + num;
		soma2 = soma2 + (num*num);
	}
	printf ("A somatória dos %d primeiros números naturais é: %d\n", x, soma);
	printf ("A somatória dos quadrados dos %d primeiros números naturais é: %d\n", x, soma2);
	printf ("A média dos %d primeiros números naturais é de: %3.2f\n", x, (float)soma/num);
	system ("pause");
	return 0;
}
