// desarrolo  de la funcion

#include "vectores.h"


        void cargarVector(int vector[], int tam )  // carga el vector
        {
            int i;
             printf("\tCARGA DE DATOS\n");
            for(i=0; i<tam; i++)
            {
                printf("Ingrese un numero: ");
                scanf("%d", &vectorDeNumeros[i]);

            }
        }



        void mostrarMaximo(int vector[], int tam){  // maximo

        int maximo;
        int i;
        maximo= calcularmaximo(vector, tam);

           printf("MAXIMO: %d", maximo);
        for(i=0; i<10; i++)
        {
            if(vectorDeNumeros[i]==maximo)
            {
                printf("%d-", i);
            }

        }
