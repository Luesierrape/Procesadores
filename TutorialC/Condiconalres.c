/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int edad ;
    printf("Ingresar edad: \n ");
    scanf("%d",&edad) ;
    if(edad>=18) { 
        printf("Eres mayor de edad \n");
    } else if(edad == 17) {
        printf("Ya casi \n");
    } 
    else {
        printf("Eres menor de edad \n");
    }
    return 0;
}
