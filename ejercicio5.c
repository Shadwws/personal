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

int menor_que_3(int numero1, int numero2, int numero3);

/*
* la funcion @main se encarga de llamar las funciones e imprimir en terminal
*/

int main()
{
	int primer=0;
	int segundo=0;
	int tercero=0;
	int menor=0;

	printf("ingese el primer numero: ");
	scanf("%d", &primer);

	printf("ingrese el segundo numero: ");
	scanf("%d", &segundo);

	printf("ingrese el tercer numero: ");
	scanf("%d", &tercero);

	menor= menor_que_3(primer, segundo, tercero);

	printf("El menor de los tres es. %d \n", menor);

	return 0;
}

/*
*La funcion @menor_que_3 recibe 3 numeros enteros y los compara
*para devolver el menor de los 3
*@param numero1: Numero entero
*@param numero2: Numero entero
*@param numero3: Numero entero
*@return Numero entero
*
*/

int menor_que_3(int numero1, int numero2, int numero3)
{

	int menor=0;
	if (numero1<numero2 && numero1<numero3)
	{
		menor=numero1;
	}
	else if(numero2<numero1 && numero2<numero3 )
	{
		menor=numero2;
	}

	else if(numero3<numero1 && numero3<numero2)
	{
		menor=numero3;
	}
	else
	{
		menor= numero1;
	}

	return menor;
}
