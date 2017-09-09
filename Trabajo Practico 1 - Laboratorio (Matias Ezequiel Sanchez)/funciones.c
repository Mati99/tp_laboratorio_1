#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float operandoDato()
{
    float a;
    printf("Ingrese un numero: ");
    scanf("%f", &a);
    return a;
}

float suma(float a, float b)
{
    float suma;
    suma = a+b;
    return suma;
}

float resta(float a, float b)
{
    float resta;
    resta = a-b;
    return resta;
}

float division (float a, float b)
{
    float division;
    if(b!=0)
    {
        division = a/b;
        printf("La division de A y B es igual a: %.2f \n", division);
    }
    else
    {
        printf("No puede dividir un numero por 0, vuelva a ingresar un numero: \n");
        return division;
    }
}

float multiplicacion(float a, float b)
{
    float multiplicacion;
    multiplicacion = a*b;
    return multiplicacion;
}

long long int factorizacion (float a)
{
    int i;
    long long int factorizacion = 1;

    for (i=(int)a; i>0; i--)
    {
        factorizacion = factorizacion*i;
    }

    if(a>0)
    {
        printf("La factorizacion de A! es igual a: %lld \n", factorizacion);
    }
    else
    {
        printf("No se puede ingresar un numero negativo. Vuelva a ingresar un numero (positivo). \n");
    }
    return 1;
}
