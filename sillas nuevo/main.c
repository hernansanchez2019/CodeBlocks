#include <stdio.h>
#include <stdlib.h>
#include "sillas.h"

#define T 5  // es un constante global.

//LEGAJO Y EDAD, PEDIR EL MAXIMO Y MINIMO, CUANTAS SILLAS HAY OCUPADAS, LIBRES, CLIENTE MAS VIEJO CON LEGAJO POSICON DE SILLA Y EDAD
// cantidad 5 edad = 20,30,40,50,0
// cantidad legajos = 100,110,200,190,180

// crear un menu de usuario : dejar sentar a un alumno; . mostrar todos los alumnos sentados, mostrar cuales son los viejos,
// agregar el nombre de cada alumno, nombre del maximo alumno, funcion que ordene los sentados por nombre y mostrar todos los datos,
//todo con opciones.

//prototipo


int main()//llamada
{
    int arraySillas[T];
    int arrayLegajos[T];
    int arrayEdad[T];
    int i;
    int maximo;
    int minimo;


    HardCodeLegajos(arrayLegajos, T);  // usamos la funcion
    HardCodeEdad(arrayEdad,T);
    maximo= PedirMaximo(arrayLegajos,T);
    minimo= PedirMinimo(arrayLegajos,T);
    inicializar(arraySillas,T);



    /*for (i=0;i<T;i++)//pidiendo datos de legajo
    {

        printf("ingrese legajo: \n");
        scanf("%d",&arrayLegajos[i]);


    }*/
    //for (i=0;i<T;i++)

  //  printf("%d\n",minimo);

    /*
        for (i=0;i<T;i++)
        {
        printf("%d\n",arrayEdad[i]);
        }*/


    return 0;
}


