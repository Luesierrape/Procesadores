/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define cubo(a) a*a*a /*Macros */ /* -Direciva de preprocesador*/
#define pi 3.14159
int main()
{
    int a = 5 ;
    printf("El cubo de de la variable a es : \%i \n", cubo(a));
    return 0;
}
