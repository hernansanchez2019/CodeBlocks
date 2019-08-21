#include <stdio.h>
#include <stdlib.h>

int main()
{
    int unNumero=0;
    char letra;
    printf("Ingrese un numero y una letra : ");
    scanf("%d" , &unNumero);
    scanf("%c" , &letra);
    printf("El numero es : %d y la letra es : %c" , unNumero , letra);
    return 0;
}
