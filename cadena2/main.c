
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 3
#define LEN 20

int main()
{
    int legajo[T];
    char nombre[T][LEN];    //[][]matriz.  T cantidad de nombres , [20] letras.c/nombre
    int i;
    int j;
    int auxint;
    char auxstring[LEN];

    for(i=0; i<T; i++)
    {
        printf("INGRESE LEGAJO : ");
        scanf("%d", &legajo[i]);  //aca mira legajo por legajo dentro del for &


        printf("INGRESE NOMBRE : ");
        fflush(stdin);  //solo en char
        gets(nombre[i]);

    }


    for(i=0; i<T-1; i++) // ordenar metodo de burbujeo,
    {
        for(j=i+1; j<T; j++)
        {
            if(legajo[i]>legajo[j])
            {
                auxint= legajo[i];
                legajo[i]= legajo[j];
                legajo[j]= auxint;


                strcpy(auxstring,nombre[i]);
                strcpy(nombre[i], nombre[j]);
                strcpy(nombre[j], auxstring);
            }
        }

    }



     for(i=0; i<T; i++)
    {


        printf("\n%d\t%s", legajo[i],nombre[i]);
    }


    return 0;




}
