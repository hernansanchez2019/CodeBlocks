#include <stdio.h>
#include <stdlib.h>
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
        scanf("%d", legajo[i]);


        printf("\nINGRESE NOMBRE : ");
        fflush(stdin);
        gets(nombre[i]);

    }


    for(i=0; i<T-1; i++)
    {
        for(j=i+1; j<T-1; j++)
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


        printf("%d\t%s", legajo,nombre);
    }


    return 0;
}
