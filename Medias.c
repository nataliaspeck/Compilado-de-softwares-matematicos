#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// M�dia harm�nica entre n n�meros

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	system ("color 0a");
	int nvalores, valor, cont = 1, soma = 0, soma2 = 0;
	printf ("Quantos valores ser�o calculados?\n");
	scanf ("%d", &nvalores);
	while (cont <= nvalores){
		printf ("Insira um n�mero:\n");
		scanf ("%d", &valor);
		if (valor < 0){
			printf ("Somente valores inteiros positivos ser�o aceitos! Insira outro valor:\n");
			scanf ("%d", &valor);
		}
		soma = soma + valor;
		soma2 = soma2 + (1 / valor);
		cont = cont + 1;		
	}
	printf ("A m�dia aritm�tica � de: %3.2f\n", (float)soma/nvalores);
	printf ("A m�dia harm�nica � de: %f\n", (float)nvalores/soma2);
	system("PAUSE");
	return 0;
}
