#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 51
#define CANT_SECTORES 5
#define CANT_MENUS 10

void initSectores(eSector sectores[], int cant);
void initMenus(eMenus menus[], int cant);
void initEmpleados(eEmpleado vec[], int tam);
int buscarLibre(eEmpleado vec[], int tam);

typedef struct
{
    int legajo;
    char apellido[TAM];
    char nombre[TAM];
    char sexo;
    float salario;
    eFecha fechaIngreso;
    int idSector;
    int isEmpty;
}eEmpleado;


typedef struct
{
    int id;
    char descripcion;

}eSector;

typedef struct
{
    int dia;
    int mes;
    int año;
}eFecha;


typedef struct
{
    int codigoMenu;
    char descripcion[TAM];
    float importe;
}eMenu;


typedef struct
{
    int codigoAlmuerzo;
    int codigoMenu;
    int legajoEmpleado;
    eFecha fechaAlmuerzo;
}eAlmuerzo;


int main()
{
    initSectores(eSector sectores[], CANT_SECTORES);
    initMenus(eMenus menus[], CANT_MENUS);




    return 0;
}

void initSectores(eSector sectores[], int cant)
{
    eSector sec[] = {1,"RRHH",2,"sistemas",3,"ventas",4,"logistica",5,"limpieza};
    int i;
    for (i=0; i<cant, i++)
    {
        sector[i]=sec[i];
    }
}

void initMenus(eMenus menus[], int cant)
{
    eMenus vec[] = {1,"sopa",30,  2,"ensalada",50,  3,"milanesa",60,  4,"pollo",50,  5,"pure",30  ,6,"patys",40,  7,"panchos",30,  8,"guiso",45,  9,"fideos",30,  10,"tortilla",55};
    int i;
    for (i=0; i<cant; i++)
    {
        menus[i]=vec[i];
    }
}


void initEmpleados(eEmpleado vec[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        vec[i].isEmpty=1;
    }
}






int buscarLibre(eEmpleado vec[], int tam)
{

    int indice = -1;

    for(int i=0; i < tam; i++)
    {
        if(vec[i].isEmpty == 0)
        {
            indice = i;
            break;
        }
    }
    return indice;
}


int altaEmpleado
