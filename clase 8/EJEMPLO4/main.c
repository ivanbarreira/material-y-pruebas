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
    char sexo;
};

int main()
{
    struct clientes vecAgenda[3]; // definicion del vector de nombre "vecAgenda" de yipo "struct clientes", tiene la capacidad de guardar una esturctura en cada uno de sus indices, se usa para las filas de la estructura
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

    for(i=0;i<3;i++)
    {
        printf("\n\n\nSu nombre es: %s", vecAgenda[i].nombre);
        fflush(stdin);

        printf("\nSu apellido es: %s", vecAgenda[i].apellido);
        fflush(stdin);

        printf("\nSu direccion es: %s %d", vecAgenda[i].calle, vecAgenda[i].numero);
        fflush(stdin);

        printf("\nEl codigo postal es: %d", vecAgenda[i].codPostal);
        fflush(stdin);

        printf("\nSu numero de telefono es: %d", vecAgenda[i].telefono);
    }

    return 0;
}

