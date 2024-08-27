/*
 * Martin Aburto
 * Trabajo Practico 2
 * Comision 3 - 2024
 * Programacion 1 - Ingenieria en Computacion
 */

#include <stdio.h>

/*
 *
 */

int main()
{

	int numero=0;
	int resultado=0;
	int multiplicador=1;

	printf("Ingrese un numero :");
	scanf("%d", &numero);

	while(multiplicador<11)
	{
		resultado=numero * multiplicador;
		printf("%d * %d = %d\n", numero, multiplicador, resultado);
		multiplicador=multiplicador+1;

	}

	return 0;
}
