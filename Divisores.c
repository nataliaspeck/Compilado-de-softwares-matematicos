#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Escreva um algoritmo que calcule o n�mero de divisores de um dado n�mero inteiro
positivo */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int num, i = 1, cont = 0;
	printf ("Insira um n�mero inteiro positivo:\n");
	scanf ("%d", &num);
	if (num < 0 || num == 0){
		printf ("Erro! Insira outro n�mero:\n");
		scanf ("%d", &num);
	}
	while (i <= num){
		if (num % i ==0){
			cont = cont + 1;
		}
	i =  i + 1;
	}
	printf ("O n�meo de divisores do n�mero %d � de: %d\n", num, cont);
	system ("pause");
	return 0;
}
