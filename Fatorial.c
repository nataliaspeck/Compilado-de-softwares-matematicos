#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fa�a um algoritmo para calcular o fatorial de um n�mero inteiro positivo n. Testar a
entrada, para garantir que n ser� positivo.  */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int x, num, fat=1;
	printf ("Insira um n�mero inteiro positivo:\n");
	scanf ("%d", &num);
	x = num;
	while (num != 0){
		fat = fat * num;
		num = num - 1;
	}
	printf ("Fatorial � %d igual a: %d\n", x, fat);
	system ("pause");
	return 0;
}
