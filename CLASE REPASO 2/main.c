#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 3

void mostrarUnArray(int parametroArray[], int cant);
void inicializarUnArray(int parametroArray[], int cant);
void cargaSecuencialUnArray(int parametroArray[], int cant, char mensaje[]);
int DameElMaximo(int parametroArray[], int cant);
int indiceM(int parametroArray[], int cant);
int DameElIndicedelMaximo(int parametroArray[], int cant);
void ordenarDesc(int parametroArray[], int cant);
void ordenarAsc(int parametroArray[], int cant);



int main()
{
    int miArray[CANTIDAD];  // miArray es la direccion de memoria, []veces q se repite

    int indice;
    int maximo;
    int indiceMaximo;


    mostrarUnArray(miArray,CANTIDAD);
    inicializarUnArray(miArray, CANTIDAD);
    mostrarUnArray(miArray,CANTIDAD);
    cargaSecuencialUnArray(miArray, CANTIDAD, " ingresar la edad");
    mostrarUnArray(miArray,CANTIDAD);
    maximo=DameElMaximo(miArray,CANTIDAD);

    printf(" El numero maximo %d", maximo);

    indiceMaximo=indiceM(miArray,CANTIDAD);
    printf("\n el Indice maximo es : %d", indiceMaximo);


    return 0;
}

void mostrarUnArray(int parametroArray[], int cant)
// mostrar
{
    int indice;
    for (indice=0; indice<cant; indice++)

    {
        printf("\n numero : %d", parametroArray[indice]);  // pedir datos y mostrarlos

    }

}


void inicializarUnArray(int parametroArray[], int cant)  // inicializar

{
    int indice;
    for (indice=0; indice<cant; indice++)

    {
        parametroArray[indice]=0;

    }

}

void cargaSecuencialUnArray(int parametroArray[], int cant) //pedir

{
    int indice;
    for (indice=0; indice<cant; indice++)

    {
        printf("\n Ingrese numero : ");
        scanf("%d", &parametroArray[indice]);

    }

}

int DameElMaximo (int parametroArray[], int cant) // muestra el maximo

{
    int indice;
    int maximo;
    maximo=DameElMaximo(parametroArray,cant);
    for (indice=0; indice<cant; indice++)
    {
        if (indice ==0 || parametroArray[indice]>maximo)
        {
            maximo=parametroArray[indice];
        }
    }

}


void ordenarDesc(int parametroArray[], int cant)
{
    int indice;
    int siguiente;
    int aux;

    for (indice=0; indice<cant-1; indice++)
    {       for(siguiente=indice+1;siguiente<cant;siguiente++)
            {
                if(parametroArray[indice]> parametroArray[siguiente])
                    {
                        aux=parametroArray[indice];
                        parametroArray[indice]=parametroArray[siguiente];
                        parametroArray[siguiente]=aux;

                    }
            }

    }

}
void ordenarAsc(int parametroArray[], int cant)
{

    for (indice=0; indice<cant; indice++)
    {

    int indice;
    int siguiente;
    int aux;

    for (indice=0; indice<cant+1; indice++)


    }

}




