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
bool es_fibonacci(int numero);


int main()
{
	int variable=0;
    	bool resultado= false;

    	printf("ingrese el numero: ");
    	scanf("%d", &variable);

	resultado = es_fibonacci(variable	);

	printf("%s", resultado ? "true\n" : "false\n");
	return 0;
}
/*
* la funcion @es_fibonacci recibe un numero y comprueba si este aparece en la serie
* @param numero: numero entero positivo
* @return booleano
*/


bool es_fibonacci(int numero)
{
	bool es_o_no=false;
	int numero1=0;
	int numero2=1;
	int resultado = 0;
	while (resultado < numero)
	{
		resultado=numero1+numero2;
		numero1=numero2;
		numero2=resultado;
		if(resultado==numero)
		{
			es_o_no=true;
		}

	}

	return es_o_no;
}
