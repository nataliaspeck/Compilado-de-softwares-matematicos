#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*  Fa�a um algoritmo que mostre os n�meros de 1 a N (definido pelo usu�rio), e a cada
m�ltiplo de 10 emita uma mensagem: �M�ltiplo de 10�.  */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int num, cont, x;
	printf ("Insira um n�mero:\n");
	scanf ("%d", &num);
	x = num;
	for (cont = 1; cont <= x; cont ++, num--){
		if (num % 10 == 0){
			printf ("%d � m�ltiplo de 10\n", num);
		} else {
			printf ("%d\n", num);
		}
	}
	system ("pause");
	return 0;
}
