#include <stdio.h>
#include <stdlib.h>

int main()
{

    int* pVec; // guarda la direccion de memoria
    int i;
    int* aux;

    pVec =(int*) malloc(sizeof(int)*5); // *5 cantidad de equivalentes q quiere el vector para usar los bits

    /*for (i=0;i<5;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", pVec+i);
    }*/

    for (i=0;i<5;i++)
    {
        printf("%d\n",*(pVec+i) );
    }
    printf(" Agrego 5 mas \n");
    aux =(int*)realloc(pVec,sizeof(int)*10); // reubica el puntero
    if(aux!=NULL)

    {
        pVec = aux;
    }
    for (i=0;i<10;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", pVec+i);
    }
    for (i=0;i<10;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", pVec+i);
    }
    printf("Lo achico\n");
    pVec=(int*) realloc(pVec,sizeof(int)*4);

    for (i=0;i<4;i++)
    {
        printf("%d\n",*(pVec+i) );
    }

    return 0;
}
