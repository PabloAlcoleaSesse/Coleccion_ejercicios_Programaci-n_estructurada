#include "Ejercicio2.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Ejercicio2() {
    union Dato {
        int i;
        float f;
        char str[20];
    };

    union Dato dato;

    dato.i = 10;
    printf("dato.i: %d\n", dato.i);

    dato.f = 220.5;
    printf("dato.f: %.2f\n", dato.f);

    strcpy(dato.str, "C programming");
    printf("dato.str: %s\n", dato.str);
}