#include <stdio.h>
#include <stdlib.h>
#include "Alumno.h"
#define A 5
#define B 3
//MOSTRAR TODOS LOS ALUMNOS CON SU LOCALIDAD*
//MOSTRAR TODAS LAS LOCALIDADES*
//MOSTRAR POR CADA LOCALIDAD TODOS LOS ALUMNOS QUE VIVEN EN ELLA*
//MOSTRAR TODOS LOS ALUMNOS QUE VIVEN EN AVELLANEDA*
//MOSTRAR LA LOCALIDAD CON MENOS ALUMNOS



int main()
{
    eAlumno listaDeAlumnos[A];
    eLocalidad listaLocalidades[3]={{1,"Avellaneda",1870},{2,"Wilde",1872},{3,"Lomas de Zamora",1700}};
    int i;
    for(i=0;i<3;i++)
    {
        printf("%d - %s - %d\n", listaLocalidades[i].idLocalidad,listaLocalidades[i].localidad,listaLocalidades[i].codigoPostal);
    }


    int respuesta;
    int opcion;
    for(i=0; i<A; i++)
    {
        listaDeAlumnos[i].estado=LIBRE;
    }

    hardCodearAlumnos(listaDeAlumnos,A);

    do
    {
        printf("1.Cargar\n2.Mostrar\n3.Ordenar\n4.Eliminar\n5.Modificar\n7.Salir");
        printf("\nElija una opcion: ");
        fflush(stdin);
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            cargarListadoAlumnos(listaDeAlumnos,A);

            break;
        case 2:
            MostrarAlumnoConLocalidad(listaDeAlumnos,A,listaLocalidades,B);
            MostrarAlumnosPorLocalidad(listaDeAlumnos,A,listaLocalidades,B);
            printf("\nALUMNOS QUE VIVEN EN AVELLANEDA: \n");
            MostrarAlumnosDeAvellaneda(listaDeAlumnos,A,listaLocalidades,B);
            printf("\nLOCALIDADES CON MENOR CANTIDAD:" );
            MostrarLocalidadConMenorCantidad(listaDeAlumnos,A,listaLocalidades,B);

            break;
        case 3:
            sortStudentsByNameAndAverage(listaDeAlumnos,A);
            break;
        case 4:
            respuesta = eliminarAlumno(listaDeAlumnos,A);
            switch(respuesta)
            {
                case 0:
                    printf("Accion cancelada por el usuario\n");
                    break;
                case 1:
                    printf("\nAlumno eliminado");
                    break;
                case -1:
                    printf("Dato no encontrado\n");
                    break;
            }

            break;
        case 5:

            respuesta = modificarAlumno(listaDeAlumnos,A,102);
            switch(respuesta)
            {
                case 0:
                    printf("Accion cancelada por el usuario\n");
                    break;
                case 1:
                    printf("Alumno modificado\n");
                    break;
                case -1:
                    printf("Dato no encontrado\n");
                    break;
            }
            break;
        }
    }
    while(opcion!=7);
    return 0;
}


