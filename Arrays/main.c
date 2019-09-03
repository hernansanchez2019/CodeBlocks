#include <stdlib.h>
#define T 5// define un valor reemplazado en el codigo , es la cantidad de veces que hace repeticiones , NO OCUPA ESPACIO EN MEMORIA
#include "vectores.h"  //carpeta de la biblioteca

//int const T = 5; // desde q se ejecuta hasta el final vale 10 , OCUPA ESPACIO EN MEMORIA




void cargarVector(int[], int ); // CARGAR EL VECTOR
void mostrarMaximo(int [], int )
int calcularmaximo()



int main()
{
    int vectorDeNumeros[T];// {7,-5,5,-6,-1,-4,10,5,4,-1};
    int i;
    int contadorDePositivos = 0;
    int sumaDePositivos = 0;
    float promedioPositivos;
    int maximo;
    int minimo;
    int flag;
    int opcion;

    do
    {
        printf("1. cargar numeros \n");
        printf("2. mostrar todo\n");
        printf("3. mostrar negativos\n");
        printf("4. mostrar promedio de positivos\n");
        printf("5. mostrar maximo\n");
        printf("6. mostrar minimo\n");
        printf("7. salir\n");
        printf("Elija una opcion : ");
        scanf("%d", &opcion);

        switch (opcion)
        {

        case 1:

            cargarVector(vectorDeNumeros,T);
            break;


        /*printf("\tCARGA DE DATOS\n");
        for(i=0; i<T; i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d", &vectorDeNumeros[i]);

        }
        break;*/

        case 2 :

            for(i=0; i<T; i++)
            {
                printf("%d\n", vectorDeNumeros[i]);
            }
            break;


        case 3:
            for(i=0; i<T; i++)
            {
                if(vectorDeNumeros[i]<0)
                {
                    printf("%d\n", vectorDeNumeros[i]);
                }

            }
            break;

        case 5 :
            flag=0;
            for(i=0; i<T; i++) // numeros maximos y minimos y la posicion coincidiendo con max y min
            {
                if ( flag==0 || vectorDeNumeros[i]> maximo)
                {

                    maximo= vectorDeNumeros[i];


                }
                flag=1;

            }

        case 6 :
            flag=0;
            for(i=0; i<T; i++)
            {

                if ( flag==0 || vectorDeNumeros[i]< minimo)
                {

                    minimo= vectorDeNumeros[i];

                }
                flag=1;

            }

        case 4:

            promedioPositivos = (float)sumaDePositivos/contadorDePositivos;
            break;

        }

        system("pause");

    }
    while(opcion!=7);

    return 0;

}




/*
printf("\tCARGA DE DATOS\n");
for(i=0; i<10; i++)
{
    printf("Ingrese un numero: ");
    scanf("%d", &vectorDeNumeros[i]);
}*/

printf("\tMUESTRO EL VECTOR\n");
for(i=0; i<10; i++)
{
    printf("%d\n", vectorDeNumeros[i]);
}
printf("\n\n\tMUESTRO SOLO LOS NEGATIVOS\n");
for(i=0; i<10; i++)
{
    if(vectorDeNumeros[i]<0)
    {
        printf("%d\n", vectorDeNumeros[i]);
    }

}

for(i=0; i<10; i++)
{
    if(vectorDeNumeros[i]>0)
    {
        sumaDePositivos += vectorDeNumeros[i];
        contadorDePositivos++;
    }
}
promedioPositivos = (float)sumaDePositivos/contadorDePositivos;

printf("Suma: %d -- Cantidad %d\n\n", sumaDePositivos, contadorDePositivos);


printf("\n\nPROMEDIO DE POSITIVOS: %f\n\n", promedioPositivos);


for(i=0; i<10; i++) // numeros maximos y minimos y la posicion coincidiendo con max y min
{
    if ( flag==0 || vectorDeNumeros[i]> maximo)
    {

        maximo= vectorDeNumeros[i];

    }
    if ( flag==0 || vectorDeNumeros[i]< minimo)
    {

        minimo= vectorDeNumeros[i];

    }
    flag=1;

}

printf("MAXIMO: %d", maximo);
for(i=0; i<10; i++)
{
    if(vectorDeNumeros[i]==maximo)
    {
        printf("%d-", i);
    }
}


printf("MINIMO: %d-", minimo);

for(i=0; i<10; i++)
{
    if(vectorDeNumeros[i]==minimo)
    {
        printf("%d-", i);
    }
}



return 0;
}
