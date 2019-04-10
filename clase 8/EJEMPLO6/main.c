#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct clientes  //definicion de la estructura
{
    char nombre[20];
    char apellido [20];
    char calle [20];
    int numero;
    int codPostal;
    int telefono;
};

int main()
{
    struct clientes vecAgenda[3], vecContactos[3], vecAmigos[3]; //definicion de tres vectores de nombre "vecAgenda", "vecContactos" y "vecAmigos", los tres de yipo "struct clientes", tienen la capacidad de guardar una esturctura en cada uno de sus indices, se usa para las filas de la estructura

    int i;

    for(i=0;i<3;i++)
    {
        printf("Ingrese nombre: ");
        gets(vecAgenda[i].nombre);
        fflush(stdin);

        printf("Ingrese apellido: ");
        gets(vecAgenda[i].apellido);
        fflush(stdin);

        printf("Ingrese calle: ");
        gets(vecAgenda[i].calle);
        fflush(stdin);

        printf("Ingrese numero: ");
        scanf("%d", &vecAgenda[i].numero);
        fflush(stdin);

        printf("Ingrese codigo postal: ");
        scanf("%d", &vecAgenda[i].codPostal);
        fflush(stdin);

        printf("Ingrese numero de telefono: ");
        scanf("%d", &vecAgenda[i].telefono);
        fflush(stdin);
    }
//forma larga o por cada campo
/*
    for(i=0;i<3;i++)
    {
        strcpy(vecContactos[i].nombre, vecAgenda[i].nombre);
        strcpy(vecContactos[i].apellido, vecAgenda[i].apellido);
        strcpy(vecContactos[i].calle, vecAgenda[i].calle);
        strcpy(vecContactos[i].numero, vecAgenda[i].numero);
        strcpy(vecContactos[i].codPostal, vecAgenda[i].codPostal);
        strcpy(vecContactos[i].telefono, vecAgenda[i].telefono);
    }
*/


    for(i=0;i<3;i++)
    {
        vecContactos[i]=vecAgenda[i]; // forma corta o toda la estructura
        printf("\n\n\nSu nombre copiado es: %s", vecContactos[i].nombre);
        fflush(stdin);

        printf("\nSu apellido copiado es: %s", vecContactos[i].apellido);
        fflush(stdin);

        printf("\nSu direccion copiada es: %s %d", vecContactos[i].calle, vecContactos[i].numero);
        fflush(stdin);

        printf("\nEl codigo postal copiado es: %d", vecContactos[i].codPostal);
        fflush(stdin);

        printf("\nSu numero de telefono copiado es: %d", vecContactos[i].telefono);
    }

    return 0;
}
