#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fa�a um algoritmo que determine e mostre o maior entre N n�meros. A condi��o de
parada � a entrada de um valor igual a 0 (ZERO) */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int num, maior;
	maior = num;
	while (num != 0){
		printf ("Insira um n�mero:\n");
		scanf ("%d", &num);
		if (num > maior){
			maior = num;
		}
	}
	printf ("O maior n�mero �: %d", maior);
	system ("pause");
	return 0;
}
