#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Um número é dito perfeito se ele é igual à metade da soma de todos os seus
divisores. Ex: 6 é um número perfeito pois seus divisores são: 1+2+3+6 = 12.
Escreva um algoritmo que liste todos os números perfeitos menores que um número
inteiro n dado  */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int num, div, cont, soma = 0, y;
	printf ("Insira um número:\n");
	scanf ("%d", &num);
	y = num;
		for (cont = 1; cont <= num; cont++, y--){
			if (num % y == 0){
				div = y;
				soma = soma + div;
			}
		}
		if ((soma/2) == num){
			printf ("%d é um número perfeito\n", num);
		} else {
			printf ("%d não é um número perfeito\n", num);
		}
	system ("pause");
	return 0;
}
