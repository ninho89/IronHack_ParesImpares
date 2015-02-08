//
//  Funciones.c
//  ParesImpares
//
//  Created by Filippo Aresu on 2/2/15.
//  Copyright (c) 2015 Filippo Aresu. All rights reserved.
//

#include <stdlib.h>
#include <time.h>
#include "Funciones.h"


int crearArrayAleatorio(int array1000[], int size){
    //cambia la "semilla" que usa rand() para generar los numeros basándose en el tiempo
    srand (time(NULL));
    for(int i=0; i<size; i++){
        array1000[i]=1+rand()%(1001-1);
    }
    return *array1000;
}

int imprimeArray(int array1000[], int size){
    int contMaxRev = size;
    int cont=0;
    int arrayAux[size];
    for(int x=0; x<size; x++){
        if(array1000[x]%2==0){
            arrayAux[cont]=array1000[x];
            cont++;
        }
        if(array1000[x]%2!=0){
            arrayAux[contMaxRev-1]=array1000[x];
            contMaxRev--;
        }
    }
    printf("Array organizado\n");
    for(int x=0; x<size; x++){
        printf("%d\n", arrayAux[x]);
    }
    return  *arrayAux;
}