#include "sillas.h"


//desarrollo
void HardCodeLegajos(int arrayLegajo [],int t) // t= tamaño , funcion legajos
{
    int i;
    int otrovector[5]={100,110,200,190,180};

for (i=0;i<t;i++)

    {
        arrayLegajo[i]= otrovector[i]; // recorre el vector, desde 0.

    }

}

 void HardCodeEdad(int arrayEdad [], int t)
 {
    int i;
    int edad[5]={20,30,40,50,0};

for (i=0;i<t;i++)

    {
        arrayEdad[i]= edad[i]; // recorre el vector, desde 0.

    }

}


int PedirMaximo(int arrayLegajo[], int t)  // maximo legajo
{
    int i;
    int maximoLegajo;

    for (i=0; i<t; i++)
    {
        if ( maximoLegajo<arrayLegajo[i] || i==0)  // i==O "bandera falsa".
        {

            maximoLegajo= arrayLegajo[i];

        }

    }

    return maximoLegajo;

}

int PedirMinimo(int arrayLegajo[], int t)  // minimo legajo
{
    int i;
    int minimoLegajo;

    for (i=0; i<t; i++)
    {
        if ( minimoLegajo>arrayLegajo[i] || i==0)  // i==O "bandera falsa".
        {

            minimoLegajo= arrayLegajo[i];

        }

    }

    return minimoLegajo;

}


void inicializar(int arraySillas[] , int t)

{
    int i;

for (i=0; i<t; i++)
    {
        arraySillas[i]=0;

    }

}



















