#include <stdio.h>
#include <string.h>

#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int idLocalidad;
    int contadorAlumnos;
}eAux;

typedef struct
{

    int dia;
    int mes;
    int anio;
} eFecha;

typedef struct
{
    int idLocalidad;
    char localidad[30];
    int codigoPostal;
} eLocalidad;
typedef struct
{
    int legajo;
    char nombre[29];
    float promedio;
    int idLocalidad;
    int estado;
} eAlumno;

eAlumno cargarAlumno(void);
void mostrarUnAlumno(eAlumno);
int buscarLibre(eAlumno*, int);
void cargarListadoAlumnos(eAlumno[], int);
void mostrarListadoAlumnos(eAlumno[], int);
void hardCodearAlumnos(eAlumno[], int);
void sortStudentsByNameAndAverage(eAlumno[], int);
void MostrarAlumnoConLocalidad(eAlumno listadoDeAlumnos[], int tamAlumnos, eLocalidad listalocalidades[] , int tamlocalidades);
void MostrarAlumnosPorLocalidad(eAlumno listadoDeAlumnos[], int tamAlumnos, eLocalidad listalocalidades[] , int tamlocalidades);
void MostrarAlumnosDeAvellaneda(eAlumno listadoDeAlumnos[], int tamAlumnos, eLocalidad listalocalidades[] , int tamlocalidades);
void MostrarLocalidadConMenorCantidad(eAlumno listadoDeAlumnos[], int tamAlumnos, eLocalidad listalocalidades[] , int tamlocalidades);

int eliminarAlumno(eAlumno[], int);
int modificarAlumno(eAlumno[], int, int);

int buscarAlumnoPorLegajo(eAlumno[], int, int);
