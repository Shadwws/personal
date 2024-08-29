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

int suma_primo(int n);
int es_primo(int numero);

/*
* la funcion @main se encarga de llamar las funciones e imprimir en terminal
*/

int main()
{

	int numero_de_primos = 0;
	int resultado = 0;

	printf("Ingresar un numero: ");
	scanf("%d", &numero_de_primos);
	resultado = suma_primo(numero_de_primos);
	printf("La suma de los primeros %d numeros primos es %d \n",numero_de_primos, resultado);

	return 0;
}

/*
*La funcion  @suma_primo recibe un valor y suma los n
* primeros numero primos para retornar el resultado 
*@param n: numero entero positivo
*@return n: numero entero positivo
*/

int suma_primo(int n)
{
	n+=1;
	int resultado=0;
	int i=2;
	int primo = 0;
	while(n>i)
	{
		primo=es_primo(i);
		resultado += primo;
		i+=1;
	}

	return resultado;
}

/*
*La funcio @es_primo recibe un numero y comprueba si
*es primo, en caso de no ser retorna 0
*@param numero: numero entero positivo
*@return numero entero positivo
*/

int es_primo(int numero)
{
	int resultado=0;
	int i=numero;
	int divisibles=0;
	int salida;
	while(i>0)
	{
		resultado=numero%i;
		i--;
		if(resultado==0)
		{
			divisibles = divisibles + 1;
		}
	}
    	if(divisibles > 2)
    	{
       		salida=0;
    	}

    	else
    	{
	       	salida=numero;
    	}
	return salida;
}
