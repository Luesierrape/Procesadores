/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
/* Funcion main(), inicia la ejecución del programa */

int main()
{
    int num1 ;
    int num2 ;
    int result;
    printf("Ingresar numero 1: \n");
    scanf("%d",&num1); /* scanf(tipo de dato,& operacion de direccion ) leer el valor ingresado, %d indica entero decimal*/
    printf("Ingresar numero 2: \n");
    scanf("%d",&num2);
    result = num1 + num2 ;
    printf("El resultado de la suma es: %d \n", result);
    return 0 ;
}
/* Fin funcion main()*/

