#include <stdio.h>
#include <stdlib.h>

int obtenerMaximos(int x, int y, int z);

int main()
{
    int x;
    int y;
    int z;
    int numMax;

    printf("ingrese el primer numero:");
    scanf("%d", &x);

    printf("ingrese el segundo numero:");
    scanf("%d", &y);

    printf("ingrese el tercer numero:");
    scanf("%d\n", &z);

    numMax = obtenerMaximos(x, y, z);

    printf("El numero maximo es %d",numMax);

    return 0;
}

int obtenerMaximos(int x, int y, int z)
{
    int numMax;

    if(x>y && x>z)
    {
        numMax=x;
    }
    else
    {
        if(y>x && y>z)
        {
            numMax=y;
        }
        else
        {
            numMax=z;
        }
    }
}
