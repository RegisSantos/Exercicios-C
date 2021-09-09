#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

	int segundos = time(0);
	srand(segundos);

	int n1 = rand();
	int n2 = rand();

	int numeroGrande = rand();
	int numeroSecreto = numeroGrande % 100;

	printf("%d\n", n1);
	printf("%d\n", n2);

	/*
	
	int a = abs(3);
	int b = abs(-3);
	int c = abs(a * b);

	printf("%d %d %d\n", a, b, c);

	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);

	*/
}

