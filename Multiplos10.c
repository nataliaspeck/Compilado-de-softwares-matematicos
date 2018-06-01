#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*  Faça um algoritmo que mostre os números de 1 a N (definido pelo usuário), e a cada
múltiplo de 10 emita uma mensagem: “Múltiplo de 10”.  */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int num, cont, x;
	printf ("Insira um número:\n");
	scanf ("%d", &num);
	x = num;
	for (cont = 1; cont <= x; cont ++, num--){
		if (num % 10 == 0){
			printf ("%d é múltiplo de 10\n", num);
		} else {
			printf ("%d\n", num);
		}
	}
	system ("pause");
	return 0;
}
