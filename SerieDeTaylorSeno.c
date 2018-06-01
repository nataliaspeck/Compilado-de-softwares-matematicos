#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

//Série de Taylor
system("color 0a");
float x; // x é o ângulo em radianos
int numtermos, i; // i é o número ímpar da vez
printf ("Programa que calcula o seno de um angulo por meio da serie de Taylor\n");
printf ("Insira o angulo em radianos e o numero de termos, quanto maior o numero de termos da serie, maior precisao no resultado:\n");
scanf ("%f\n %d", &x, &numtermos);
float soma = 0, numerador = x;
int denominador = 1;
	for (i=1; i <= 2*(numtermos - 1); i = i + 2){
		soma = soma + (numerador / denominador);
		numerador = numerador * (x * x) * (-1);
		denominador = denominador * (i+1) * (i+2);
	}  
	printf ("Seno: %f\n", soma);
	
	system ("pause");
	return 0;
}
