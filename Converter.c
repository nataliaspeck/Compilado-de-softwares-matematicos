#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* A conversão de graus Farenheit para graus centígrados é obtida por:
C = (F - 32) * 5/9 . Faça um algoritmo que calcule e escreva uma tabela em 
centígrados em função de graus Farenheit, cobrindo a faixa de 50 a 150 graus,
variando de 2 em 2 graus. */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int F, C;
	for (F=32; F <= 150; F = F + 2){
		C = (F - 32) * 5/9;
		printf ("%dºC é igual a %dF\n", C, F);
	}
	system ("pause");
	return 0;
}
