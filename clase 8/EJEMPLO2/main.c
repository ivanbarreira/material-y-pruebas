#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct clientes  //definicion de la estructura
{
    char nombre[20];
    char apellido [20];
    char calle [20];
    int numero;
};

int main()
{
    struct clientes agenda; //declaracion de variable con nombre agenda de tipo struct clientes

    strcpy(agenda.nombre, "Ivan");
    strcpy(agenda.apellido, "Barreira");
    strcpy(agenda.calle, "Av. Mitre");
    agenda.numero = 750;

    printf("El nombre es: %s", agenda.nombre);
    printf("\nEl apellido es : %s", agenda.apellido);
    printf("\nLa direccion es: %s %d", agenda.calle, agenda.numero);

    return 0;
}
