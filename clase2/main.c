#include <stdio.h>
#include <stdlib.h>

int main()
{
   int dinero; //bitcoins, libra, dolar , peso
   char tipo;
   int contador=0;
   float promedio;
   int maximoImporteEnDolares;
   int esElPrimerDolar;
   int acumulador=0;
   float contadorpesos=0;
   int porcentaje;


   contador=0;
   esElPrimerDolar=1;

   while ( contador<5)

    {
            printf("Ingrese dinero : ");
            scanf("%d" , &dinero);
            contador++;

            do {
                printf("ingrese un tipo de moneda = ");
                fflush(stdin);
                scanf("%c" , &tipo);
            }while(tipo!='p' && tipo!='d' && tipo!='b' && tipo!='l');

            if ( tipo=='d'){

                if ( esElPrimerDolar==1){
                    maximoImporteEnDolares=dinero;
                    esElPrimerDolar=0;}

                    else {
                        if( dinero>maximoImporteEnDolares){
                            maximoImporteEnDolares=dinero;
                        }
                    }

                }if ( tipo=='p'){
                    acumulador= dinero + acumulador;
                    contadorpesos++;
                    }
            }

        porcentaje= (contadorpesos / contador) * 100;
        promedio = acumulador / contadorpesos;
        printf ("El importe maximo en dolares es = %d" , maximoImporteEnDolares);
        printf("\nEl promedio es = %f " , promedio);
        printf("El porcentaje en pesos es = %c " , porcentaje);
     return 0;
   }
