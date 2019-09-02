#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vectorDenumeros[10]= {1,2,3,4,5,-6,-7,-8,-9,-10};
    int  i=0;
    int contadorpos=0;
    int contadorneg=0;
    int acumuladorpos=0;
    float promedio;
    int numMax;
    int numMin;
    int flag=0;

      printf("\tMUESTRO EL VECTOR ");
      for (i=0;i<10;i++){
    printf("\n%d" , vectorDenumeros[i]);
    }
        printf("\n\tMUESTRO LOS NEGATIVOS ");
        for (i=0;i<10;i++)
    {   if (vectorDenumeros[i]<0 ){

            printf("\n%d" , vectorDenumeros[i]);
            contadorneg++;
            }
    }

    printf("\n\tMUESTRO LOS POSITIVOS ");

     for (i=0;i<10;i++)
    {   if (vectorDenumeros[i]>0 ){

            printf("\n%d" , vectorDenumeros[i]);
            acumuladorpos= vectorDenumeros[i] + acumuladorpos;
            contadorpos++;
            }
    }
    for (i=0;i<10;i++){

        if ( vectorDenumeros[i] > numMax || flag==0){

            numMax= vectorDenumeros[i];
        }
        else if ( vectorDenumeros[i] < numMin || flag==0){

            numMin= vectorDenumeros[i];
            flag=1;
        }
    }


    promedio= (float) acumuladorpos / contadorpos;
    printf("\n\nCANTIDAD DE POSITIVOS = %d " , contadorpos);
    printf("\nCANTIDAD DE NEGATIVOS = %d " , contadorneg);
    printf("\nPROMEDIO DE POSITIVOS = %f " , promedio);
    printf("\nNUMERO MAXIMO = %d " , numMax);
    printf("\nNUMERO MINIMO = %d " , numMin);

    return 0;
}
