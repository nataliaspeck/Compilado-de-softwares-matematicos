#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fa�a um algoritmo para calcular a somat�ria, a soma dos quadrados e a m�dia dos n
primeiros n�meros naturais.   */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int num, soma = 0, soma2 = 0, media, cont, x;
	printf ("Insira a quantidade de n�meros inteiros positivos desejada:\n");
	scanf ("%d", &num);
	x = num;
	for (cont = 1; cont <= x; cont++, num--){
		soma = soma + num;
		soma2 = soma2 + (num*num);
	}
	printf ("A somat�ria dos %d primeiros n�meros naturais �: %d\n", x, soma);
	printf ("A somat�ria dos quadrados dos %d primeiros n�meros naturais �: %d\n", x, soma2);
	printf ("A m�dia dos %d primeiros n�meros naturais � de: %3.2f\n", x, (float)soma/num);
	system ("pause");
	return 0;
}
