#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("ingrese un numero: ");

    int* pnum;

    pnum = (int*) malloc(sizeof(int));

    if(pnum == NULL){
        printf("No se pudo conseguir memoria");
        exit(1);
    }

    scanf("%d", &(*pnum));

    printf("El numero ingresado es %d", *pnum);

    free(pnum);

    return 0;
}
