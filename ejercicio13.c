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

void cargar_arreglo(int capacidad, int arreglo[]);

void muestra_arreglo(int capacidad, int arreglo[]);

void fusion_arreglo(int arreglo1[], int arreglo2[], int capacidad1, int capacidad2, int arreglo_resultante[]);

void operacion_arreglo( int arreglo[], int capacidad);

double promedio(int arreglo[], int capacidad);

int valor_minimo(int arreglo[], int capacidad);

int posición_del_valor_maximo(int arreglo[], int capacidad);

void ordenar(int arreglo[], int capacidad);

void main()
{
    int salida=1;
    int operacion;
    int capacidad1;
    int capacidad2;
    int eleccion_funcion;
    printf("BIENVENIDO!!\nIngrese la capacidad del primer arreglo que desea ingresar por favor: ");
    scanf("%d", &capacidad1);
    int arreglo1[capacidad1];
    cargar_arreglo(capacidad1, arreglo1);


    printf("Ingrese la capaciodad del segundo arreglo que desea ingresar por favor: ");
    scanf("%d", &capacidad2);
    int arreglo2[capacidad2];
    cargar_arreglo(capacidad2, arreglo2);


    while (salida==1)
    {
        printf("ingrese un numero para seguir.\n1-Para mostrar los arreglos\n2-Para fusionar los arreglos\n3-Para operar con los arreglos:\n");
        scanf("%d", &eleccion_funcion);

        if (eleccion_funcion==1)
        {
            printf("El arreglo 1 contiene: \n");
            muestra_arreglo(capacidad1, arreglo1);

            printf("El arreglo 2 : \n");
            muestra_arreglo(capacidad2, arreglo2);
        }

        else if(eleccion_funcion==2)
        {
            int capacidad3=capacidad1+capacidad2;
            int arreglo_resultante[capacidad3];

            fusion_arreglo(arreglo1, arreglo2, capacidad1, capacidad2, arreglo_resultante);
            muestra_arreglo(capacidad3, arreglo_resultante);
        }

        else if(eleccion_funcion==3)
        {
            printf("Ingrese 1 para operar con el arreglo 1\nIngrese 2 para operar con el arreglos 2 \n");
            scanf("%d", &operacion);

            if (operacion==1)
            {
            operacion_arreglo(arreglo1, capacidad1);
            }

            else if(operacion==2)
            {
            operacion_arreglo(arreglo2, capacidad2);
            }

            else
            {
                printf("Valor invalido!!");
            }

        }

        else
        {
            printf("ERROR: Valor invalido!!");
        }

        printf("Desea salir?\ningrese 0 para si y 1 para no: ");
        scanf("%d", &salida);
    }
}

/*
* la funcion @cargar_arreglo 
* 
* @param capacidad:
* @param arreglo:
*/

void cargar_arreglo(int capacidad, int arreglo[])
{
    for (int i = 0; i < capacidad; i++) 
    {
        printf("Ingrese el valor para la posicion %d: ", i);
        scanf("%d", &arreglo[i]);
    }
}


/*
* la funcion @muestra_arreglo 
* 
* @param capacidad:
* @param arreglo:
*/

void muestra_arreglo(int capacidad, int arreglo[])
{
    int i=0;
    while (i != capacidad) 
    {
        printf("valor %d: %d \n", i, arreglo[i]);
        i++;
    }
}

/*
* la funcion @muestra_arreglo 
* 
* @param capacidad1:
* @param arreglo1:
* @param capacidad:2
* @param arreglo2:
* @param arreglo_resultante:
*/

void fusion_arreglo(int arreglo1[], int arreglo2[], int capacidad1, int capacidad2, int arreglo_resultante[])
{

    int i;
    for ( i = 0; i < capacidad1; i++) 
    {
        arreglo_resultante[i] = arreglo1[i];
    }

    for ( i = 0; i < capacidad2; i++) 
    {
        arreglo_resultante[capacidad1 + i] = arreglo2[i];
    }

}

/*
* la funcion @operacion_arreglo 
* 
* @param capacidad:
* @param arreglo:
* @return
*/

void operacion_arreglo( int arreglo[], int capacidad)
{
    int resultado;
    float promedio_resultado;
    int operacion;
    printf("ingrese que operacion hacer\n1-Promedio\n2-Obtener el valor minimo\n3-Obtener la posicion del valor maximo\n4-Ordenar de menor a mayor\n");
    scanf("%d", &operacion);

    if (operacion==1)
    {
        promedio_resultado=promedio(arreglo, capacidad);
        printf("El promedio del arreaglos %d es: %.2f",operacion, promedio_resultado);

    }
    else if(operacion==2)
    {
        resultado=valor_minimo(arreglo, capacidad);
        printf("El valor minimo es: %d", resultado);

    }

    else if(operacion==3)
    {
        resultado=posición_del_valor_maximo(arreglo, capacidad);
        printf("la posicion del valor maximo es: %d", resultado);


    }

    else if(operacion==4)
    {
        ordenar(arreglo, capacidad);

    }

    else
    {
        printf("ERROR, valor invalido");
    }
    
}

/*
* la funcion @promedio 
* 
* @param capacidad:
* @param arreglo:
* @return
*/

double promedio(int arreglo[], int capacidad)
{
    double resultado = 0.0;
    int suma = 0;
    for (int i = 0; i < capacidad; i++) 
    {
        suma += arreglo[i];
    }
    resultado= suma/capacidad;

    return resultado;
}

/*
* la funcion @valor_minimo 
* 
* @param capacidad:
* @param arreglo:
* @return
*/

int valor_minimo(int arreglo[], int capacidad)
{
    int resultado;
    int minimo = arreglo[0];
    for (int i = 1; i < capacidad; i++) 
    {
        if (arreglo[i] < minimo) 
        {
            resultado = arreglo[i];
        }
    }

    return resultado;
}

/*
* la funcion @posición_del_valor_maximo 
* 
* @param capacidad:
* @param arreglo:
* @return
*/

int posición_del_valor_maximo(int arreglo[], int capacidad)
{
    int maximo = arreglo[0];
    int resultado;
    for (int i = 0; i < capacidad; i++) 
    {
        if (arreglo[i] > maximo) 
        {
            maximo = arreglo[i];
            resultado = i;
        }
    }
    return resultado;
}

/*
* la funcion @ordenar 
* 
* @param capacidad:
* @param arreglo:
* @return
*/

void ordenar(int arreglo[], int capacidad)
{
    
    for (int i = 0; i < capacidad ; i++) 
    {
        for (int j = 0; j < capacidad - i ; j++) 
        {
            if (arreglo[j] > arreglo[j + 1]) 
            {
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            } 
        }
    }
    for (int k = 0; k <= capacidad; k++) 
    {
        printf(" %d \n", arreglo[k]);
    }
}
