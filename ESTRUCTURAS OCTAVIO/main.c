#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//define tipo de dato
typedef struct
{
    char nombre[50];
    int nota;
    int legajo;
    int estaVacio; //0 para no , 1 para si esta vacio.
//todo lo que este dentro va a ser estructura
}Alumno;//se le pone 'e' en la primera letra paa identificar que es una estructura
void inicializarAlumno(Alumno listadoAlumnos[],int tam);
void mostrarAlumnos(Alumno listadoAlumnos[],int tam);
void mostrarAlumno(Alumno listadoAlumnos[],int lugar);
int dameElIndiceLibre(Alumno listadoAlumnos[],int tam);
int main()
{

    Alumno listadoAlumnos[5];

    /*Alumno unAlumno;
    Alumno otroAlumno;
    otroAlumno=unAlumno;
    Alumno nuevoAlumno;
    printf("\n El numero es: %d",otroAlumno.nota);
    scanf("%s",otroAlumno.nombre);
    printf("\n El nombre es: %s",otroAlumno.nombre);
    otroAlumno.nota=999;*/

    inicializarAlumno(listadoAlumnos, 5);
    /*int indice=dameElIndiceLibre(listadoAlumnos,5);
    nuevoAlumno.legajo=999;
    nuevoAlumno.nota=10;
    nuevoAlumno.estaVacio=0;
    strcpy(nuevoAlumno.nombre,"Walter");
        if(indice !=-1)
        {
            listadoAlumnos[indice]=nuevoAlumno;
        }
        else
        {
            printf("no hay luga libre");
        }*/

    mostrarAlumnos(listadoAlumnos,5);

    return 0;
}
void inicializarAlumno(Alumno listadoAlumnos[],int tam)
{
    int i;
    int legajoAux [5]={111,333,555,999,888};
    int notaAux[5]={10,2,9,4,6};
    char nombreAux [5][50]={"Juan","Pedro","Maria","Julieta","Pepe"};
    for(i=0;i<tam;i++)
    { strcpy(listadoAlumnos[i].nombre,nombreAux[i]);
      listadoAlumnos[i].nota=notaAux[i];
      listadoAlumnos[i].legajo=legajoAux[i];
      listadoAlumnos[i].estaVacio=0;

    }
}
void mostrarAlumno(Alumno listadoAlumnos[],int lugar)
{
printf("%s\t%d\t%d",listadoAlumnos[lugar].nombre,listadoAlumnos[lugar].legajo,listadoAlumnos[lugar].nota);
}
void mostrarAlumnos(Alumno listadoAlumnos[],int tam)
{ int i;
  int hayAlumnos=0;
  printf("Nombre: \tLegajo: \tNota:  \n");
   for (i=0;i<tam;i++)
    {
        if(listadoAlumnos[i].estaVacio==0)
        {
            mostrarAlumno(listadoAlumnos,i);
            hayAlumnos=1;
        }

    }
    if(hayAlumnos==0)
    {
        printf("no hay alumnos");
    }
}
int dameElIndiceLibre(Alumno listadoAlumnos[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        if(listadoAlumnos[i].estaVacio==1)
        {
            return i;
        }
    }
    return -1;
}
