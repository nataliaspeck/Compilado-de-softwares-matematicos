#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Um n�mero � dito perfeito se ele � igual � metade da soma de todos os seus
divisores. Ex: 6 � um n�mero perfeito pois seus divisores s�o: 1+2+3+6 = 12.
Escreva um algoritmo que liste todos os n�meros perfeitos menores que um n�mero
inteiro n dado  */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int num, div, cont, soma = 0, y;
	printf ("Insira um n�mero:\n");
	scanf ("%d", &num);
	y = num;
		for (cont = 1; cont <= num; cont++, y--){
			if (num % y == 0){
				div = y;
				soma = soma + div;
			}
		}
		if ((soma/2) == num){
			printf ("%d � um n�mero perfeito\n", num);
		} else {
			printf ("%d n�o � um n�mero perfeito\n", num);
		}
	system ("pause");
	return 0;
}
