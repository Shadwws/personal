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

int mayor_que_3(int numero1, int numero2, int numero3);

/*
* la funcion @main se encarga de llamar las funciones e imprimir en terminal
*/

int main()
{
	int primer=0;
	int segundo=0;
	int tercero=0;
	int mayor=0;

	printf("ingese el primer numero: ");
	scanf("%d", &primer);

	printf("ingrese el segundo numero: ");
	scanf("%d", &segundo);

	printf("ingrese el tercer numero: ");
	scanf("%d", &tercero);

	mayor= mayor_que_3(primer, segundo, tercero);

	printf("El mayor de los tres es. %d \n", mayor);

	return 0;
}
/*
*La funcion @mayor_que_3 recibe 3 numeros enteros y los compara
*para devolver el mayor de los 3
*@param numero1: Numero entero
*@param numero2: Numero entero
*@param numero3: Numero entero
*@return Numero entero
*
*/
int mayor_que_3(int numero1, int numero2, int numero3)
{

	int mayor=0;
	if (numero1>numero2 && numero1>numero3)
	{
		mayor=numero1;
	}
	else if(numero2>numero1 && numero2>numero3 )
	{
		mayor=numero2;
	}

	else if(numero3>numero1 && numero3>numero2)
	{
		mayor=numero3;
	}
	else
	{
	mayor= numero1;
	}

	return mayor;
}
