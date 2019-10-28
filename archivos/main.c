#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int legajo;
    char nombre;
    char apellido;
    float salario;

}eEmpleado;





int main()
{
    eEmpleado*lista[50];
    eEmpleado* unEmpleado = new_Empleado()

    FILE* pArchivo;
    char legajo[20];
    char nombre[20];
    char apellido[20];
    char sueldo[10];
    int i=0;

    pArchivo = fopen("datos.csv","r");

    while(!feof(pArchivo))
    {
        fscanf(pArchivo,"%[^,],%[^,],%[^,],%[^\n]\n",legajo,nombre,apellido,sueldo);

        printf("%s-%s-%s-%s\n",legajo,nombre,apellido,sueldo);

        unEmpleado->legajo= atoi(legajo);
        strcpy(unEmpleado->nombre,nombre);
        strcpy(unEmpleado->apellido,apellido);


        unEmpleado->sueldo= atoi(sueldo);


    }



    fclose(pArchivo);

    for(i=0;i<50;i++)
    {
        printf("%d ->")
    }


    /*FILE* pArchivo;
    int x;
    //char miNombre[]="German";
    int k = 9;
    pArchivo = fopen("miArchivo.bin"," wb");
    if(pArchivo!=NULL)
    {

      fread(x,sizeof(int), 1 , pArchivo); // formato binario
      printf("%d", x);


       //fwrite(miNombre,sizeof(char),strlen(miNombre), pArchivo);// escribir datos

    // fprintf(pArchivo,"Mi nombre es: %s \nEl dia esta nublado ", miNombre); //escribe dentro de un archivo fprintf

        fclose(pArchivo);
    }

    //leemos

    char miNombre[50];
    pArchivo= fopen("miArchivo.txt", "r");
    if(pArchivo!=NULL)
    {
            while(!feof(pArchivo))
        {
               fgets(miNombre,49, pArchivo);
                printf("%s", miNombre);
        }


        fclose(pArchivo);
    }*/



    return 0;
}



eEmpleado* new_Empleado()
{
    eEmpleado* p;
    p= (void*) malloc(sizeof(eEmpleado));
}

