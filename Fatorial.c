#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um algoritmo para calcular o fatorial de um número inteiro positivo n. Testar a
entrada, para garantir que n será positivo.  */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int x, num, fat=1;
	printf ("Insira um número inteiro positivo:\n");
	scanf ("%d", &num);
	x = num;
	while (num != 0){
		fat = fat * num;
		num = num - 1;
	}
	printf ("Fatorial é %d igual a: %d\n", x, fat);
	system ("pause");
	return 0;
}
