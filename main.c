#include <stdio.h>
#include <stdlib.h>

int obtenerMaximos(int x, int y, int z);

int main()
{
    int x=15;
    int y=16;
    int z=14;


    printf("numMax"),obtenerMaximos(x, y, z);



    return 0;
}

int obtenerMaximos(int x, int y, int z)
{
    int numMax;

    if(x>y && x>z)
    {
        numMax=x;
    }
        else if(y>x && y>z)
        {
            numMax=y;
        }
        else
        {
            numMax=z;
        }
    }
    return numMax;
}
