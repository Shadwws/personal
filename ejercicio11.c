/*
 * Martin Aburto
 * Trabajo Practico 2
 * Comision 3 - 2024
 * Programacion 1 - Ingenieria en Computacion
 */

#include <stdio.h>

/*
 *
 *
 *
 *
 *
 *
 */
double litros_a_galones(double litros);

double galones_a_litros(double galones);

double millas_a_kilometros(double millas);

double kilometros_a_millas(double kilometros);

/*
* la funcion @main se encarga de llamar las funciones e imprimir en terminal
*/

int main()
{

        int eleccion=0;
        double resultado;
        double variable;
        printf("ingrese: \n1 para litro a galones \n2 para galones a kilometros \n3 millas a kilometros \n4 kilometros a millas: ");
        scanf("%d", &eleccion);
    
        printf("ingrese el numero a convertir: ");
        scanf("%d", &variable);
        
        
        if (eleccion==1)
        {
            resultado=litros_a_galones(variable);
            
        }
        else if (eleccion==2)
        {
            resultado=galones_a_litros(variable);
            
        }
        else if (eleccion==3)
        {
            resultado=millas_a_kilometros(variable);
            
        }
        else if (eleccion==4)
        {
            resultado=kilometros_a_millas(variable);
            
        }
        else
        {
            printf("ERROR \"valor invalido\" \n");
            
    
        }
    
       
        printf("el resultado es de %f \n", resultado);

}

/*
La funcion @litros_a_galones recibe un valor de litros y lo convierte en galones
@param litros: Numero tipo double
@return: Numero tipo double
*/

double litros_a_galones(double litros)
{
        double galones;
        galones=litros/3.78541;
    
        return galones;
}

/*
La funcion @galones_a_litros recibe un valor de galones y lo convierte en litros
@param galones: Numero tipo double
@return Numero tipo double
*/

double galones_a_litros(double galones)
{
        double litros;
        litros=galones*3.78541;
    
        return litros;
}

/*
La funcion @millas_a_kilometros recibe un valor en millas y lo convierte en kilometros

@param millas: Numero tipo double
@return: Numero tipo double
*/

double millas_a_kilometros(double millas)
{
        double kilometros;
        kilometros=millas*1.60934;
    
        return kilometros;
}

/*
La funcion @kilometros_a_millas recibe un valor en kilometros y lo trasnforma en millas
@param kilometros: Numero tipo double
@return: Numero tipo double
*/

double kilometros_a_millas(double kilometros)
{
        double millas;
        millas=kilometros/1.60934;
    
        return millas;
}
