#include <stdio.h>
#include <stdlib.h>

int sumarNumeros( int numero1,int numero2);


int main()
{
    int numero1;
    int numero2;
    int resultado;

    printf("Ingrese numero a sumar = ");
    scanf("%d" , &numero1);
    printf("Ingrese numero a sumar = ");
    scanf("%d", & numero2);
    resultado=  sumarNumeros( numero1, numero2);
    printf("La suma es = %d " , resultado);

    return 0;
}

int sumarNumeros( int numero1,int numero2){
    int resultado;
    resultado= numero1 + numero2;
    return resultado;

}
