#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* pnum;

    pnum = (int*) malloc(sizeof(int));

    if(pnum == NULL){
        printf("No se pudo conseguir memoria");
        exit(1);
    }


    for(int i = 0; i<5; i++){
        printf("Ingrese un numero: ");
        scanf("%d", &pnum[i]);
    }



    printf("Los numeros ingresados son: ");

    for(int i = 0; i<5; i++){
        printf("%d, ", pnum[i]);
    }

    free(pnum);

    return 0;
}
