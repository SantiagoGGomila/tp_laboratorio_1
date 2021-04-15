/*
 ============================================================================
 Name        : tp_laboratorio_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    setbuf(stdout, NULL);
	int opcion;
    float operandoA;
    float operandoB;
    float sumaMenu;
    float restaMenu;
    float multiplicacionMenu;
    float divisionMenu;
    float factorialMenuA;
    float factorialMenuB;
    int flagMenu1;
    int flagMenu2;
    int flagMenu3;


    flagMenu1=0;
    flagMenu2=0;
    flagMenu3=0;


    do
    {
        printf("\n*********************************\n*********************************\n");
        if(flagMenu1==1)
        {
            printf("1. Ingresar 1er operando (A=%.2f)\n", operandoA);
        }
        else
        {
            printf("1. Ingresar 1er operando (A)\n");
        }
        if(flagMenu2==1)
        {
            printf("2. Ingresar 2do operando (B=%.2f)\n", operandoB);
        }
        else
        {
            printf("2. Ingresar 2do operando (B)\n");
        }
        printf("3. Para calcular las operaciones.\n");
        printf("4. Para ver los resultados. \n");
        printf("5. Para salir. \n");
        printf("********************************\n********************************\n");

        printf("Ingrese una opcion : ");
        scanf("%d", &opcion);
        switch(opcion)
        {
            case 1:
                operandoA=CargarNumerosAYB();
                flagMenu1=1;
                flagMenu2=0;
                flagMenu3=0;

            break;

            case 2:
               if(flagMenu1==1)
               {
                    operandoB=CargarNumerosAYB();
                    while(operandoB==0)
                    {
                        printf("Error reingrese un numero mayor a cero\n");
                        operandoB=CargarNumerosAYB();
                    }
                    flagMenu2=1;
                    flagMenu3=0;

               }
               else
               {
                   printf("Por favor ingrese el primer valor en la opcion 1.");
               }

            break;

            case 3:
                if(flagMenu2==1)
                {

                    sumaMenu=suma(operandoA,operandoB);
                    restaMenu=resta(operandoA, operandoB);
                    multiplicacionMenu=multiplicacion(operandoA, operandoB);
                    divisionMenu=division(operandoA, operandoB);
                    factorialMenuA=factorialNumero(operandoA);
                    factorialMenuB=factorialNumero(operandoB);
                    printf("Los calculos ya han sido realizados \n");
                    flagMenu3=1;
                }
                else
                {
                    printf("Por favor ingrese el valor en la opcion 2.");
                }
                system("pause");
            break;

            case 4:
                if(flagMenu3==1)
                {
                    printf("El resultado de la suma entre A y B es : %.2f \n", sumaMenu);
                    printf("El resultado de la resta entre A y B es : %.2f \n", restaMenu);
                    printf("El resultado de la multiplicacion entre A y B es : %.2f \n",multiplicacionMenu);
                    printf("El resultado de la division entre A y B es : %.2f \n", divisionMenu);
                    printf("El resultado de la factorial A es : %.2f \n", factorialMenuA);
                    printf("El resultado de la factorial B es : %.2f \n", factorialMenuB);
                }
                else
                {
                    printf("Por favor ingrese primero la opcion 3.");
                }
                system("pause");

            break;
            case 5:
                printf("Usted ha salido de la calculadora.");
        }


    }while(opcion !=5);

}
