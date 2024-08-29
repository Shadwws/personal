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


bool numero_perfecto(int numero);

/*
* la funcion @main se encarga de llamar las funciones e imprimir en terminal
*/


int main()
{
	int variable;
	bool resultado;
        printf("ingrese el numero a evaluar: ");
        scanf("%d", &variable);
        resultado=numero_perfecto(variable);

        printf("%s", resultado ? "true\n" : "false\n");
        return 0;
}


/*
* la funcion @numero_perfecto recibe un numero entero positivo
* y comprueba si este es perfecto
* @param numero: numero entero positivo
* @return booleano
*/

bool numero_perfecto(int numero)
{
        int i=1;
        bool que_es=false;
	int resultado;
        int divisible;
        while( i<numero)
        {
        	 divisible=numero%i;
            	 if (divisible==0)
            	{
                	resultado=resultado+i;
            	}
		i+=1;

        }
        if (resultado==numero)
        {
            que_es=true;
        }
        else
        {
            que_es=false;

        }
        return que_es;
}
