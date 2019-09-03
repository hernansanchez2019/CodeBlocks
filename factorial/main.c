#include <stdio.h>
#include <stdlib.h>



/** \brief  calcula el factorial de un
 *
 * \param  int el numero sobre q se factorea
 * \param
 * \return int el factorial
 *
 */
int factorial (int);
int main()
{
    int numero=5;
    int resultado=1; // acumula cada factor de los numeros,  numero * 2 , *3
    //int i;
     resultado = factorial(numero);

    for (i=numero; i>=1;i--){

       resultado=  resultado * i ;
    }



    printf("El factorial es : %d", resultado);
    return 0;
}

 int factorial (int numero){

     int resultado;

     if ( numero==0){

        resultado =1;
     }  else {
     resultado= numero *factorial(numero-1);}
 }

 return resultado;




