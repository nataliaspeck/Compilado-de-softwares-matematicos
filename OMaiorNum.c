#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um algoritmo que determine e mostre o maior entre N números. A condição de
parada é a entrada de um valor igual a 0 (ZERO) */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int num, maior;
	maior = num;
	while (num != 0){
		printf ("Insira um número:\n");
		scanf ("%d", &num);
		if (num > maior){
			maior = num;
		}
	}
	printf ("O maior número é: %d", maior);
	system ("pause");
	return 0;
}
