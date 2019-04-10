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
    struct clientes agenda, contactos; //declaracion de dos variables: una con nombre "agenda" y otra de nombre "contactos", ambas de tipo struct clientes

    printf("Ingrese su nombre: ");
    gets(agenda.nombre);
    fflush(stdin);

    printf("Ingrese su apellido: ");
    gets(agenda.apellido);
    fflush(stdin);

    printf("Ingrese calle: ");
    gets(agenda.calle);
    fflush(stdin);

    printf("Ingrese el numero de la calle: ");
    scanf("%d", &agenda.numero);
    fflush(stdin);

    printf("Ingrese el codigo postal: ");
    scanf("%d", &agenda.codPostal);
    fflush(stdin);

    printf("Ingrese su numero de telefono: ");
    scanf("%d", &agenda.telefono);


    contactos = agenda; // asignar estructuras



    printf("\n\n\nUsted se llama : %s %s, y vive en %s %d, el codigo postal es %d y su numero de telefono es %d", contactos.nombre, contactos.apellido, contactos.calle, contactos.numero, contactos.codPostal, contactos.telefono);


    return 0;
}
