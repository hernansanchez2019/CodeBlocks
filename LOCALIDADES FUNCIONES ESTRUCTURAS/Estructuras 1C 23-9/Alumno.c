#include "Alumno.h"

int buscarLibre(eAlumno listadoDeAlumnos[], int tam)
{

    int indice = -1;
    int i;

    for(i=0; i<tam; i++)
    {
        if(listadoDeAlumnos[i].estado!=OCUPADO)
        {
            indice = i;
            break;
        }
    }
    return indice;

}


void hardCodearAlumnos(eAlumno listadoDeAlumnos[], int tam)
{
    int i;
    int legajo[]= {101,102,105,666,180,124};
    float promedio[]= {6.66, 4,7.66,10,7,9};
    char nombre[][25]= {"Juan","Maria josefina","Maria","pablo","hernan","mario"};
    int localidad[]= {1,1,3,4,5,6};
    for(i=0; i<3; i++)
    {
        listadoDeAlumnos[i].legajo = legajo[i];
        listadoDeAlumnos[i].promedio = promedio[i];
        strcpy(listadoDeAlumnos[i].nombre, nombre[i]);
        listadoDeAlumnos[i].estado = OCUPADO;
        listadoDeAlumnos[i].idLocalidad=localidad[i];

    }
}

void mostrarListadoAlumnos(eAlumno listadoDeAlumnos[],  int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        if(listadoDeAlumnos[i].estado==OCUPADO)
        {
            mostrarUnAlumno(listadoDeAlumnos[i]);
        }

    }
}

void cargarListadoAlumnos(eAlumno listadoDeAlumnos[], int tam)
{
    int i;
    int indice;

    indice = buscarLibre(listadoDeAlumnos, tam);
    printf("Indice: %d\n", indice);
    if(indice!=-1)
    {
        //hay lugar
        listadoDeAlumnos[indice] = cargarAlumno();
    }
    else
    {
        printf("No hay espacio disponible");
    }

}

eAlumno cargarAlumno(void)
{
    eAlumno miAlumno;

    printf("Ingrese legajo: ");
    scanf("%d", &miAlumno.legajo);
    printf("Ingrese nombre: ");
    fflush(stdin);
    scanf("%[^\n]", miAlumno.nombre);
    printf("Ingrese promedio: ");
    scanf("%f", &miAlumno.promedio);
    printf("En que localidad vive?");
    scanf("%d", &miAlumno.idLocalidad);

    miAlumno.estado = OCUPADO;

    return miAlumno;
}
void mostrarUnAlumno(eAlumno miAlumno)
{
    printf("%4d %25s %8.2f %4d\n",miAlumno.legajo,miAlumno.nombre, miAlumno.promedio, miAlumno.idLocalidad);

}

void sortStudentsByNameAndAverage(eAlumno listadoDeAlumnos[], int tam)
{
    int i;
    int j;
    eAlumno auxAlumno;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(listadoDeAlumnos[i].nombre,listadoDeAlumnos[j].nombre)>0)
            {
                auxAlumno = listadoDeAlumnos[i];
                listadoDeAlumnos[i] = listadoDeAlumnos[j];
                listadoDeAlumnos[j] = auxAlumno;
            }

            else
            {
                if(strcmp(listadoDeAlumnos[i].nombre,listadoDeAlumnos[j].nombre)==0)
                {
                    if(listadoDeAlumnos[i].promedio>listadoDeAlumnos[j].promedio)
                    {
                        auxAlumno = listadoDeAlumnos[i];
                        listadoDeAlumnos[i] = listadoDeAlumnos[j];
                        listadoDeAlumnos[j] = auxAlumno;
                    }
                }
            }
        }

    }
}


int buscarAlumnoPorLegajo(eAlumno* listaDeAlumnos, int cant, int legajo)
{
    int i;
    int retorno = -1;


    if(listaDeAlumnos!=NULL && cant>0)
    {

        for(i=0; i<cant; i++)
        {
            if(listaDeAlumnos[i].legajo==legajo && listaDeAlumnos[i].estado==OCUPADO)
            {
                retorno = i;
                break;
            }
        }
    }


    return retorno;
}

int modificarAlumno(eAlumno listaDeAlumnos[], int cant, int legajo)
{
    int index;
    char nombre[30];
    int quePaso = -1;
    char respuesta;
    eAlumno aux;

    index = buscarAlumnoPorLegajo(listaDeAlumnos,cant, legajo);
    if(index!=-1)
    {
        aux = listaDeAlumnos[index];
        mostrarUnAlumno(aux);
        printf("Ingrese el nuevo nombre: ");
        fflush(stdin);
        gets(aux.nombre);
        printf("Esta seguro que desea modificar este alumno? :");
        respuesta = getche();
        if(respuesta=='s')
        {
            listaDeAlumnos[index] = aux;
            quePaso = 1;
        }
        else
        {
            quePaso = 0;
        }

    }
    return quePaso;
}
int eliminarAlumno(eAlumno listadoDeAlumnos[], int tam)
{
    int legajo;
    int i;
    int flag = 0 ;
    char respuesta;

    int quePaso = -1;

    mostrarListadoAlumnos(listadoDeAlumnos,tam);

    printf("Ingrese el legajo: ");
    scanf("%d", &legajo);

    for(i=0; i<tam; i++)
    {
        if(listadoDeAlumnos[i].legajo==legajo && listadoDeAlumnos[i].estado==OCUPADO)
        {
            mostrarUnAlumno(listadoDeAlumnos[i]);
            printf("Esta seguro que desea eliminar este alumno? :");
            respuesta = getche();
            if(respuesta=='s')
            {
                listadoDeAlumnos[i].estado = LIBRE;
                quePaso = 1;
            }
            else
            {
                quePaso = 0;
            }
            break;
        }

    }

    return quePaso;

}

void MostrarAlumnoConLocalidad(eAlumno listadoDeAlumnos[], int tamAlumnos, eLocalidad listalocalidades[], int tamlocalidades)
{
    int i;
    int j;
    char aux[30];

    //printf("LEGAJO\t\t\tNOMBRE\t\t\tPROMEDIO\t\t\tLOCALIDAD");

    for(i=0; i<tamAlumnos; i++)
    {
        if(listadoDeAlumnos[i].estado==OCUPADO)
        {
            for(j=0; j<tamlocalidades; j++)
            {
                if(listadoDeAlumnos[i].idLocalidad==listalocalidades[j].idLocalidad)
                {
                    strcpy(aux, listalocalidades[j].localidad);
                }
            }
            printf("%4d %25s %.2f %4s\n", listadoDeAlumnos[i].legajo, listadoDeAlumnos[i].nombre, listadoDeAlumnos[i].promedio, aux);



        }

    }

}
void MostrarAlumnosPorLocalidad(eAlumno listadoDeAlumnos[], int tamAlumnos, eLocalidad listalocalidades[], int tamlocalidades)
{
    int i;
    int j;
    int aux;

    for(i=0; i<tamlocalidades; i++)
    {
        printf("%s\n", listalocalidades[i].localidad);

        for(j=0; j<tamAlumnos; j++)
        {
            if(listalocalidades[i].idLocalidad==listadoDeAlumnos[j].idLocalidad)
            {
                printf("%s\n", listadoDeAlumnos[j].nombre);
            }
        }
    }
}


void MostrarAlumnosDeAvellaneda(eAlumno listadoDeAlumnos[], int tamAlumnos, eLocalidad listalocalidades[], int tamlocalidades)
{
    char localidad[30]="Avellaneda";
    int i;
    int j;


    for(i=0; i<tamlocalidades; i++)
    {
        if(strcmp(localidad,listalocalidades[i].localidad)==0)
        {
            for(j=0; j<tamAlumnos; j++)
            {
                if(listadoDeAlumnos[j].idLocalidad==listalocalidades[i].idLocalidad)
                {
                    printf(listadoDeAlumnos[j].nombre);
                    printf("\n");
                }
            }
        }
    }

}

void MostrarLocalidadConMenorCantidad(eAlumno listadoDeAlumnos[], int tamAlumnos, eLocalidad listalocalidades[], int tamlocalidades)
{
    eAux Aux[3];
    int i;
    int j;
    int flag=0;
    int min;

    for(i=0; i<tamlocalidades; i++)
    {
        Aux[i].contadorAlumnos=0;
        Aux[i].idLocalidad=listalocalidades[i].idLocalidad;
    }
    for(i=0; i<tamlocalidades; i++)
    {
        for(j=0; j<tamAlumnos; j++)
        {
            if(listadoDeAlumnos[j].idLocalidad==Aux[i].idLocalidad)
            {
                Aux[i].contadorAlumnos++;
            }
        }

    }



    for(i=0; i<tamlocalidades; i++)
    {
        if(Aux[i].contadorAlumnos<min || flag==0)
        {
            min= Aux[i].contadorAlumnos;
            flag=1;
        }
    }

    for(i=0;i<tamlocalidades;i++)
    {
        if(min==Aux[i].contadorAlumnos)
        {
            for(j=0;j<tamlocalidades;j++)
            {
                if(Aux[i].idLocalidad==listalocalidades[j].idLocalidad)
                {
                    printf("%d -- %s\n", Aux[i].contadorAlumnos,listalocalidades[j].localidad);

                }
            }
        }

    }






}









