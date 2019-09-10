#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
   char nombre[15];
   char apellido[15];
   char apellidonombre[50]=""; // ""para inicializarlo

   printf("INGRESE SU NOMBRE :");
    fflush(stdin);
    gets(nombre);

   printf("\nINGRESE SU APELLIDO : ");
   fflush(stdin);
    gets(apellido);

    strcat(apellidonombre, apellido);
    strcat(apellidonombre, ", ");
    strcat(apellidonombre, nombre);
    printf("%s", apellidonombre );





    return 0;
}

    /*chat auxString[1000]; para poner los caracteres q quieras
    while ( strlen(auxString>14){

            printf("reingrese el nombre " );
             fflush(stdin);
             gets(nombre);
    } strlen(auxString);


    char  palabra[10]="chau"; // []cantidad de caracteres
    char otrapalabra[100];// (palabra,otrapalabra) lo pisa
    int i;
    int comp;
    int largo;
    //strcpy(palabra,"hola"); //asignando a la variable  , palabra es destino, hola origen, ( ejemplo para decir el maximo )


    //palabra="hola" no se puede.ni asignar ni comparar.
    printf("INGRESE UNA PALABRA : ");
    fflush(stdin); //cuando leemos la palabra. stdin(buffer)
    gets(palabra); //puntero char direccion de una variable, gets para win,fgets para linux. fgets(palabra,10,stdin)

   // scanf("%s" , palabra);  // sin [] y sin & , es lo mismo  palabra solo.  salvo q se lean vectores.
   scanf("%[")
    strcat(palabra,otrapalabra); concatenar

    scanf("%[^\n]", palabra); para mostrar seguido sin que tome el espacio

    strupr(palabra); // pasar todo a mayuscula

    printf("%s", palabra);  // mostras por pantalla.

    /*strcmp(palabra,otrapalabra);

    comp=stricmp(palabra,otrapalabra);
    printf("\nCOMPARA : %d", comp);  //COMPARAR*/
    //strlen() //para contar la cantidad de caracateres
    /* largo= strlen(palabra);
    // palabra[largo-1]= '0'; para linux
     printf("\nEL LARGO ES ; %d " ,largo);*/
