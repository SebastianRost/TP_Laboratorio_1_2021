#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "calculadora.h"


int calcularSuma(int num1,int num2)
{
    int resultadoSuma;
    resultadoSuma = num1+num2;
    return resultadoSuma;
}

int calcularResta(int num1,int num2)
{
    int resultadoResta;
    resultadoResta = num1-num2;
    return resultadoResta;
}

int calcularMultiplica(int num1,int num2)
{
    int resultadoMultip;
    resultadoMultip=num1*num2;
    return resultadoMultip;
}

int calcularDiv(int num1,int num2)
{
    int division;
    if(num2!=0)
    {
        division = (float) num1/num2;
    }
    else
    {
        division = 'E';
    }
    return division;
}

int calcularFactorial(int num)
{
    int factorial = 1;
    for (int i = 0; i < num; i++)
    {
        factorial = factorial * (i + 1);
    }
    return factorial;
}


void mostrar(int num1, int num2,int resultadoSuma,int resultadoResta,int resultadoMultip, float resultadoDiv, int factorialA,int factorialB)
{
    system("cls");
    printf("\n\t-------------------------------------------------------------\n\n");
    printf("\t\t\tResultados\n");
    printf("\t\t\t----------\n\n");
    printf("\t\ta)El resultado de la suma es: %d\n", resultadoSuma);
    printf("\t\tb)El resultado de la resta es: %d\n", resultadoResta);
    printf("\t\tc)El resultado de la multiplicacion es: %d\n", resultadoMultip);
    if(resultadoDiv=='E')
    {
        printf("\t\td)No se puede dividir por cero\n");

    }
    else
    {
        printf("\t\td)El resultado de la division es: %.2f\n", resultadoDiv);
    }
    if( num1 >= 0 && num1 <= 12)
    {
        printf("\t\te)El factorial de A es:%d\n", factorialA);
    }
    else
    {
        printf("\t\te)No se puede calcular el factorial de A\n");
    }
    if( num2 >= 0 && num2 <= 12)
    {
        printf("\t\te)El factorial de B es:%d\n", factorialB);
    }
    else
    {
        printf("\t\te)No se puede calcular el factorial de B\n\n");
    }
    printf("\n\t-------------------------------------------------------------\n\n");
}
