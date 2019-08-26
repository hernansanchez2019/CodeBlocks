#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tipo;
    int dinero;
    int contador;
    int maxdolar;
    int flag=0;
    float promedio;
    int acumuladorpesos=0;
    int contadorpesos=0;
    int porcentaje;


    for ( contador=0 ; contador<5; contador++)
        {

        printf("Ingrese el dinero = ");
    scanf("%d" , &dinero);


    do {
    printf("Ingrese el tipo = ");
    fflush(stdin);
    scanf("%c",&tipo);
    }while ( tipo!='p' && tipo!='d' && tipo!='b' && tipo!='l');

    if (tipo=='d') {
        if( dinero > maxdolar || flag==0){

        maxdolar=dinero;
        flag=1;
    }
    }if( tipo=='p'){
    acumuladorpesos= dinero + acumuladorpesos;
    contadorpesos++;

    }

    }
    porcentaje= ((float)contadorpesos /5) * 100;
    promedio= (float)acumuladorpesos / contadorpesos;
    printf("El maximo en dolares es = %d" , maxdolar);
    printf("\nEl Promedio en pesos es = %f" , promedio);
    printf("\nEl porcentaje en pesos es = %d ", porcentaje);

    return 0;
}

/* a realizar un ejercicio que pida 5 tipo de monedas , sacar el maximo en dolares,
el promedio de los pesos
porcentaje de pesos*/
