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
float litros_a_galones(int litros);

float galones_a_litros(int galones);

float millas_a_kilometros(int millas);

float kilometros_a_millas(int kilometros);


int main()
{

int eleccion=0;
        float resultado;
        int variable;
        printf("ingrese: \n1 para litro a galones \n2 para galones a kilometros \n3 millas a kilometros \n4 kilometros a millas\n: ");
        scanf("%d", &eleccion);
    
        printf("ingrese el numero a convertir: ");
        scanf("%d", &variable);
        switch (eleccion)
        {
        case 1:
    
            resultado=litros_a_galones(variable);
            break;
    
        case 2:
    
            resultado=galones_a_litros(variable);
            break;
    
        case 3:
    
            resultado=millas_a_kilometros(variable);
            break;
    
        case 4:

            resultado=kilometros_a_millas(variable);
            break;
    
        default:
    
            printf("ERROR \"valor invalido\" ");
            break;
    
        }
    
        if (eleccion!=0)
            printf("el resultado es de %f", resultado);

}

/*
La funcion @litros_a_galones, tiene la variable @litros, cual hace la convercion directa a galones 
dividiendo los litros por 3.78541

PRE-CONDICION: valor en litros
POST-CONDICION: valor en galones
*/

float litros_a_galones(int litros)
{
        float galones;
        galones=litros/3.78541;
    
        return galones;
}

/*
La funcion @galones_a_litros, tiene la variable @galones, cual hace la convercion directa a litros
multiplicando los galones por 3.78541

PRE-CONDICION: valor en galones
POST-CONDICION: valor en litros
*/

float galones_a_litros(int galones)
{
        float litros;
        litros=galones*3.78541;
    
        return litros;
}

/*
La funcion @millas_a_kilometros, tiene la variable @millas, cual hace la convercion directa a kilometros
multiplicando los millas por 1.60934

PRE-CONDICION: valor en millas
POST-CONDICION: valor en kilometros
*/

float millas_a_kilometros(int millas)
{
        float kilometros;
        kilometros=millas*1.60934;
    
        return kilometros;
}

/*
La funcion @kilometros_a_millas, tiene la variable @kilometros, cual hace la convercion directa a millas
dividiendo los kilometros por 1.60934

PRE-CONDICION: valor en kilometros
POST-CONDICION: valor en millas
*/

float kilometros_a_millas(int kilometros)
{
        float millas;
        millas=kilometros/1.60934;
    
        return millas;
}
