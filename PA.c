#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Escreva um algoritmo para calcular os n primeiros termos de uma progressão
aritmética (P.A.) de elemento inicial i e razão r.  */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int i, r, n, cont = 1;
	printf ("Insira o elemento inicial, a razão, e a quantidade de termos, respectivamente:\n");
	scanf ("%d\n %d\n %d", &i, &r, &n);
	do{
		printf ("P.A: %d\n", i);
		i = i + r;
		cont = cont + 1;
	} while (cont <= n);
	system ("pause");
	return 0;
}
