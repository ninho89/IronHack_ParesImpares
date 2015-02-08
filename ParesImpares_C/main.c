//
//  main.c
//  ParesImpares
//
//  Created by Filippo Aresu on 2/2/15.
//  Copyright (c) 2015 Filippo Aresu. All rights reserved.
//

#include <stdio.h>
#include "Funciones.h"

int main(int argc, const char * argv[]) {
    
    //declaracion array
    int array1000[100];
    //se crea el array con numeros aleatorios
    crearArrayAleatorio(array1000, sizeof(array1000)/sizeof(int));
    //imprime el array creado
    imprimeArray(array1000, sizeof(array1000)/sizeof(int));
    
    return 0;
}



