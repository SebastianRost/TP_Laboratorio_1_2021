
/*
 ***********************************************

 Name        : TP1_Calculador.c
 Author      : Rost Sebastián
 Version     : 1.0.0
 Description : Trabajo Práctico Número 1

 ***********************************************

 */


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "calculadora.h"

int main(void)
{
    setbuf(stdout, NULL);
    int num1;
    int num2;
    int flagoperando1 = 1;
    int flagoperando2 =1 ;
    int opcion;
    int resultadoSuma;
    int resultadoResta;
    int resultadoMultip;
    int resultadoDiv;
    int flagCalculo=1;
    int factorialA;
    int factorialB;
    char seguir= 's';
    char siNo;

    do
    {
        system("cls");
        printf("\t*******************\tMenu de opciones\t*******************\n\n");
        flagoperando1 ? printf("\t    1. Ingresar el primer operando (A=X)\n") : printf("\t    1. Ingresar el primer operando (A= %d)\n", num1);
        flagoperando2 ? printf("\t    2. Ingresar el segundo operando (B=Y)\n") : printf("\t    2. Ingresar el segundo operando (B= %d)\n", num2);
        printf("\t    3. Calcular todas las operaciones: \n\t\ta) Calcular la suma (A+B) \n\t\tb) Calcular la resta (A-B) \n\t\tc) Calcular la division (A/B) \n\t\td) Calcular la multiplicacion (A*B) \n\t\te) Calcular el factorial (A!) \n");
        printf("\t    4. Informar resultados\n");
        printf("\t    5. Salir\n\n");
        printf("\t*******************************************************************\n\n");

        printf("\n    Ingrese opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {

        case 1:

            system("cls");
            printf("\n\n\tIngrese el primer operando: \t");
            scanf("%d", &num1);
            flagoperando1=0;
            flagCalculo=1;
            break;

        case 2:
            if(flagoperando1)
            {
                printf("\n\n\tPrimero ingrese el primer operando\n\n");
                printf("Press Enter para continuar...");
                getchar();
                while(getchar()!='\n');
            }
            else
            {
                system("cls");
                printf("\n\n\tIngresar el segundo operando: \t");
                scanf("%d", &num2);
                flagoperando2=0;
                flagCalculo=1;
            }

            break;

        case 3:
            if(flagoperando2)
            {
                printf("\n\n\tNo se puede realizar la opcion sin ingresar los dos operandos, ingreselos y vuelva a intentar\n\n");

                printf("Press Enter para continuar...");
                getchar();
                while(getchar()!='\n');
            }
            else
            {
                system("cls");
                resultadoSuma = calcularSuma(num1,num2);
                resultadoResta = calcularResta(num1,num2);
                resultadoMultip= calcularMultiplica(num1,num2);
                resultadoDiv=calcularDiv(num1,num2);
                factorialA = calcularFactorial(num1);
                factorialB = calcularFactorial(num2);
                printf("\n\n\tSe ha realizado el calculo de las operaciones\t\n\n");
                flagCalculo=0;
                printf("Press Enter para continuar...");
                getchar();
                while(getchar()!='\n');
            }
            break;

        case 4:
            flagCalculo ? printf("\n\n\tNo se pueden mostrar los resultados sin realizar el calculo con anterioridad\n\n") :
            mostrar(num1,num2,resultadoSuma,resultadoResta,resultadoMultip,resultadoDiv,factorialA,factorialB);
                printf("Press Enter para continuar...");
                getchar();
                while(getchar()!='\n');
            break;

        case 5:

            system("cls");
            fflush(stdin);
            printf("\n\n\tRealmente desea salir? (s / n)\n\n");
            scanf(" %c",&siNo);
            if(siNo=='s' || siNo=='S' )
            {
                seguir='n';
            }
            break;
        default:

            printf("\n\n\tno es una opcion valida\n\n");
            printf("Press Enter para continuar...");
            getchar();
            while(getchar()!='\n');

            break;
        }
    }
    while(seguir=='s');

    return 0;
}

