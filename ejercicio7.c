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
int potencia(int base, int exponente);
int multiplicacion(int numero1, int numero2);


int main()
{
	int numero=0;
	int resultado=0;
	int exponente =0;

	printf("ingrese el numero base: ");
    	scanf("%d", &numero);

	printf("ingrese el exponente: ");
   	scanf("%d", &exponente);

	resultado= potencia(numero, exponente);

	printf("El resultado es %d \n",resultado);

	return 0;
}
/*
* La funcion @potencia recibe una base y exponente para realiza multiples multiplicaciones
* en funcion de la base y exponente dado
* @param base: numero entero
* @param exponente: numero entero positivo
* @return numero entero
*/


int potencia(int base, int exponente)
{
	int resultado=1;
	int i=0;

    	if (exponente==0 && base!=0)
    	{
        	resultado=1;
    	}

    	else if (base>0 && exponente>0)
    	{
        	while (i<exponente)
        	{
          		resultado=multiplicacion(base, resultado);
         	 	i++;
        	}
    	}

    	else if(base<0 && exponente<0)
    	{
        	exponente=(-exponente);
        	base=(-base);
       		while (i<exponente)
        	{
          		resultado=multiplicacion(base, resultado);
	        	i++;
        	}
       		if (exponente%2 == 0)
        	{
        	}
        	else
        	{
        		resultado=0-(resultado);
        	}
    	}

    	else if(base>0 && exponente<0)
    	{
        	exponente=(-exponente);
        	while (i<exponente)
        	{
        		resultado=multiplicacion(base, resultado);
        		i++;
        	}
    	}

    	else if(base<0 && exponente>0)
    	{
        	base=(-base);
        	while (i<exponente)
        	{
        		resultado=multiplicacion(base, resultado);
        		i++;
        	}

       		if (exponente%2 == 0)
        	{
        	}
        	else
        	{
            		resultado=0-(resultado);
        	}
    	}
    	else
    	{
        	resultado=0;
    	}

    	return resultado;

}
/*
* La función @multiplicacion, recibe 2 numeros y realizar la operación de multiplicar
* de ambos numeros pero con sumas
* @param numero1: Numero entero
* @param numero2: Numero entero
* @return Numero entero
*/


int multiplicacion(int numero1, int numero2)
{
    	int contador=0;
    	int resultado=0;
    	while(contador<numero2)
    	{
    		resultado=resultado+numero1;
    		contador++;
    	}
    	return resultado;

}
