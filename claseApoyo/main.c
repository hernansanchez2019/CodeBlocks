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
   int contadorDolares=0;

   contador=0;
   esElPrimerDolar=1;

   while ( contador<10)

    {       contador++;
            printf("Ingrese dinero : ");
            scanf("%d" , &dinero);
            printf("Ingrese tipo : ");
            fflush(stdin);
            scanf("%c" , &tipo);
            contadorDolares++;


            if ( tipo=='d'){

                if ( esElPrimerDolar==1){
                    maximoImporteEnDolares=dinero;
                    esElPrimerDolar=0;}

                    else {
                        if( dinero>maximoImporteEnDolares){
                            maximoImporteEnDolares=dinero;
                        }
                    }

                }
            }


        printf ("El importe maximo en dolares es = %d" , maximoImporteEnDolares , tipo);
     return 0;
   }


