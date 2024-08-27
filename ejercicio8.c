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


bool numero_defectivo( int numero);

int main()
{
	int numero = 0;
	bool es_o_no=false;

	printf("ingrese el numero a evaluar: ");
    	scanf("%d", &numero);

	es_o_no=numero_defectivo(numero);

	printf("%s", es_o_no ? "true\n" : "false\n");

	return 0;
}

bool numero_defectivo( int numero)
{
	int i=1;
    	int resultado=false;
    	int divisible=0;
    	while(i<numero)
    	{
        	divisible=numero%i;

        	if (divisible==0)
        	{
            		resultado=resultado+i;
        	}
		i+=1;

    	}
    	if (resultado<numero)
    	{
        	resultado=true;
    	}
    	else
    	{
   		resultado=false;
   	}
   	 return resultado;

}
