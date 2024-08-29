/*
 * Martin Aburto
 * Trabajo Practico 2
 * Comision 3 - 2024
 * Programacion 1 - Ingenieria en Computacion
 */

#include <stdio.h>

/*
 * Diseña e implementa una función que calcule la suma de los dígitos de un
 * número entero positivo pasado como parámetro.
 */

int suma_de_digitos( int numero);

/*
* la funcion @main se encarga de llamar las funciones e imprimir en terminal
*/

int main()
{
	int numero;
	int resultado;
	printf("ingrese un numero entero : ");
	scanf("%d", &numero);

	resultado=suma_de_digitos(numero);

	printf("el resultado es %d\n", resultado);


}
/*
*La funcion @suma_de_digitos recibe un numero entero positivo
*para poder sumar los digitos y retornar el resultado
*@param numero:Numero entero positivo
*@return Numero entero positivo
*/


int suma_de_digitos( int numero)
{
	int resultado=0;
	int contador=0;
	while (numero>1)
	{
		contador=numero%10;

		numero=( numero - contador ) / 10;
		resultado+= contador;
	}

	return resultado;
}
