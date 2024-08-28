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


/*
*La funcion @main te permite a traves de consola ingresar
*un valor numerico para imprimir en la terminal una "tabla de multiplicar"
*con el resultado de la multiplicacion del numero ingresado por 1 hasta 10
*
*/
void main()
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
