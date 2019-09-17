#include <stdio.h>
#include <stdlib.h>
#include "Alumno.h"
#define A 5


int main()
{
    eAlumno listaDeAlumnos[A];
    int i;
    int opcion;
    for(i=0; i<A; i++)
    {
        listaDeAlumnos[i].estado=LIBRE;
    }

    hardCodearAlumnos(listaDeAlumnos,A);

    do
    {
        printf("1.Cargar\n2.Mostrar\n3.Ordenar\n7.Salir");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            cargarListadoAlumnos(listaDeAlumnos,A);

            break;
        case 2:
             mostrarListadoAlumnos(listaDeAlumnos, A);
             break;
        case 3:
             sortStudentsByNameAndAverage(listaDeAlumnos,A);
             break;
        }


    }while(opcion!=7);








    return 0;
}


