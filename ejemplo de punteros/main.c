#include <stdio.h>
#include <stdlib.h>

void CambiarPorValor(int unDato);
void CambiarPorReferencia(int* unDato);  // direccion

int DameUnEntero()
int unNumero()


int main()
{    int numero;
    numero =22; // dentro de una variable sigue siendo copia
    CambiarPorValor(numero); // copia para la funcion
    printf("\nnumero = %d" , numero);

CambiarPorReferencia(&numero);
printf("\nnumero = %d" , numero);


    return 0;






void CambiarPorReferencia(int* unDato)

{
 *unDato=99;
 printf("\ndato por referencia = %d" , *unDato);
}

int DameUnEntero(char* mensaje , int max , int cantidad , int cantidad, int *pNumero);
{

int aux;
printf("%s" , mensaje);
scanf("%d" , &aux);
while (aux > max){

    printf("%s" , mensaje);
    scanf("%d" , &aux)
}

return aux;

}
}


