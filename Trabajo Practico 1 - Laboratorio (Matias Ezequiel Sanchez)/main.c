#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    float a;
    float b;
    float asignarA;
    float asignarB;
    int i;
    long long int resultadoFactorizacion;
    float resultado;

    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        if(asignarA==1)
        {
            printf("1- Ingresar 1er operando (A=x)\n");
        }
        else
        {
           printf("1- Ingresar 1er operando (A=%.2f)\n", a);
        }
        if (asignarB==1)
        {
            printf("2- Ingresar 2do operando (B=y)\n");
        }
        else
        {
            printf("2- Ingresar 2do operando (B=%.2f)\n", b);
        }

        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                a = operandoDato();
                system("cls");
                break;
            case 2:
                b = operandoDato();
                system("cls");
                break;
            case 3:
                resultado = suma (a, b);
                printf("La suma de A y B es igual a: %.2f \n", resultado);
                system("pause");
                break;
            case 4:
                resultado = resta (a, b);
                printf("La resta de A y B es igual a: %.2f \n", resultado);
                system("pause");
                break;
            case 5:
                resultado = division (a, b);
                system("pause");
                break;
            case 6:
                resultado = multiplicacion (a, b);
                printf("La multiplicacion de A y B es igual a: %.2f \n", resultado);
                system("pause");
                break;
            case 7:
                resultadoFactorizacion=factorizacion(a);
                system("pause");
                break;
            case 8:
                system("cls");

                resultado = suma(a,b);
                printf("La suma de A y B es igual a: %.2f \n", resultado);

                resultado = resta(a, b);
                printf("La resta de A y B es igual a: %.2f \n", resultado);

                resultado = division(a, b);

                resultado = multiplicacion(a, b);
                printf("La multiplicacion de A y B es igual a: %.2f \n", resultado);

                resultado = factorizacion(a);
                break;
            case 9:
                printf("Pulse ENTER para salir...\n");
                seguir = 'n';
                break;
        }
    }
    return 0;
}
