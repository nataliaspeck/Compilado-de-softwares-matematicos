#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* A convers�o de graus Farenheit para graus cent�grados � obtida por:
C = (F - 32) * 5/9 . Fa�a um algoritmo que calcule e escreva uma tabela em 
cent�grados em fun��o de graus Farenheit, cobrindo a faixa de 50 a 150 graus,
variando de 2 em 2 graus. */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int F, C;
	for (F=32; F <= 150; F = F + 2){
		C = (F - 32) * 5/9;
		printf ("%d�C � igual a %dF\n", C, F);
	}
	system ("pause");
	return 0;
}
