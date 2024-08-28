/*
 * Martin Aburto
 * Trabajo Practico 2
 * Comision 3 - 2024
 * Programacion 1 - Ingenieria en Computacion
 */

#include <stdio.h>

/*
 * Escribe una función que cuente y muestre en pantalla
 * la cantidad de dígitos en un número entero positivo.
 */

int contador_de_digitos (int numero);

int main()
{
   int digitos=0;
   int numero=0;
   printf("Bienvenido \nIngrese el numero a calcular: ");
   scanf("%d", &numero);
   if (numero > 0)
   {
	digitos=contador_de_digitos(numero);
	printf("El numero %d tiene %d digitos \n", numero, digitos);

   }
   else if (numero == 0)
   {
	digitos=1;
	printf("El numero %d tiene %d digitos \n", numero, digitos);

   }
   else
   {
	printf("ERROR, valor invalido \n");
   }

   return 0;
}





/*
*La funcion @contador_de_digitos recibe un numero entero positivo
*para contar los digitos y retornarlo
*@param numero: Numero entero positivo
*@return numero entero positivo
*/
int contador_de_digitos (int numero)
{
   int digitos;
   while (numero>0)
  {
	numero=numero / 10;
	digitos=digitos + 1;

  }

   return digitos;
}
