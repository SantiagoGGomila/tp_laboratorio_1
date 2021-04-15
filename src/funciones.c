#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float CargarNumerosAYB(void)
{
    float numerosA;
    numerosA=0;

    printf("Ingrese el numero :");
    scanf("%f", &numerosA);

    return numerosA;
}





float suma (float numero1, float numero2)
{
    float resultado;
    resultado = numero1 + numero2;

    return resultado;
}

float resta (float numero1, float numero2)
{
    float resultadoResta;

    resultadoResta=numero1-numero2;

    return resultadoResta;
}

float multiplicacion(float numero1, float numero2)
{
    float resultadoMultiplicacion;

    resultadoMultiplicacion = numero1 * numero2;

    return resultadoMultiplicacion;
}

float division (float numeroDividendo , float numeroDivisor)
{
    float resultado;

    resultado= numeroDividendo/numeroDivisor;




    return resultado;
}

int factorialNumero(float numero)
{


    float acumuladorFactorial;

    acumuladorFactorial=1;

   for(int i=numero; i>0; i--)
    {
        acumuladorFactorial*=numero;
        numero--;
    }

    return acumuladorFactorial;

}


