#include <stdio.h>
#include <stdlib.h>



void funcion(int*);

int main()
{
    int numero =4;
    printf("El numero antes de modificar es = %d ", numero);
   funcion(&numero);
    printf("\nEl numero despues de modificar es = %d ", numero);


    return 0;
}


void  funcion(int * numero)
{

    printf("\nIngrese un numero : ");
    scanf("%d" , numero);

   // *numero=100;  // * operador de in acceso

}
