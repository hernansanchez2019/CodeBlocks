#include <stdio.h>
#include <stdlib.h>

typedef struct
{

    int legajo;
    char sexo;
    float altura;
}ePersona;

ePersona* new_Persona();  // constructor

void mostrarPersona(ePuntero*);

int main()
{
    ePersona* puntero= new_Persona();



    if (puntero!=NULL)
    {
        printf("La persona es : \n");
    printf("%d---%c---%.2f", puntero-> legajo, puntero-> sexo,puntero-> altura);
    }

    free(puntero); // libera un espacio en el sistema operativo



  return 0;

}

ePersona* new_Persona()
{
    //ePersona unaPersona={1000,'M', 1.78};
    ePersona * puntero;

   puntero= (ePersona*) malloc(sizeof(ePersona)); // reserva espacio en memoriav , devuelve una direccion de memoria
   if (puntero!=NULL)
   {
        puntero->sexo='M';
     puntero->legajo=1000;
      puntero->altura=1.80;
   // puntero=&unaPersona;
   }

    return puntero;
}

void mostrarPersona(ePuntero* unaPersona)
{

}

