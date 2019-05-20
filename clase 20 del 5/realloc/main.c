#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* pnum;
    int* paux;

    pnum = (int*) malloc(sizeof(int)*5);

    if(pnum == NULL){
        printf("No se pudo conseguir memoria");
        exit(1);
    }


    printf("\n                              Ingrese 5 numeros\n\n\n");

    for(int i = 0; i<5; i++){
        printf("Ingrese un numero: ");
        scanf("%d", &pnum[i]);
    }



    printf("\n\nLos numeros ingresados son: ");

    for(int i = 0; i<5; i++){
        printf("%d, ", pnum[i]);
    }





    paux = (int*) realloc(pnum, sizeof(int)*10);

    if(paux != NULL){
        pnum = paux;
    }
    else{
        printf("No se pudo encontrar memoria");
    }



    printf("\n\n\n                          Ingrese otros 5 numeros\n\n\n");

    for(int i = 5; i<10; i++){
        printf("Ingrese numero: ");
        scanf("%d", &pnum[i]);
    }



    printf("\n\nLos  5 numeros nuevos son: ");

    for(int i = 5; i<10; i++){
        printf("%d, ", pnum[i]);
    }



    printf("\n\n\n Los 10 numeros ingresados son: ");

    for(int i = 0; i<10; i++){
        printf("%d, ", pnum[i]);
    }


    paux = (int*) realloc(pnum, sizeof(int)*5);

    printf("\n\n\nLos  5 primeros 5 numeros son: ");

    for(int i = 0; i<5; i++){
        printf("%d, ", pnum[i]);
    }

    free(pnum);



    return 0;
}
