/*
 * Martin Aburto
 * Trabajo Practico 2
 * Comision 3 - 2024
 * Programacion 1 - Ingenieria en Computacion
 */

#include <stdio.h>
#include <stdbool.h>
/*
 *
 */

int suma_fibonacci(int numero);


int main()
{
	int variable=0;
    	int resultado= 0;

    	printf("ingrese el numero: ");
    	scanf("%d", &variable);

	resultado = suma_fibonacci(variable);

	printf("%d\n", resultado);
	return 0;
}
/*
 *La funcion suma_fibonacci recibe un numero y realiza la suma 
 *de los primeros n numeros de la serie fibonacci, n el numero recibido
 *@param numero: numero entero positivo
 *@return numero entero positivo
 */

int suma_fibonacci(int n)
{
	int resultado_suma=0;
	int numero1=0;
	int numero2=1;
	int resultado = 0;
	int i=0;
	while (i < n)
	{
		resultado_suma=resultado_suma + numero1;
		resultado=numero1+numero2;
		numero1=numero2;
		numero2=resultado;
		i+=1;
	}

	return resultado_suma;
}
