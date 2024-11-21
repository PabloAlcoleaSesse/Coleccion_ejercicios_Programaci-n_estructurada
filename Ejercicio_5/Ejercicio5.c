#include "Ejercicio5.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../Ejercicio_1/Ejercicio1.h"

// Ejercicio 5a
void imprimirEstudiante(struct Estudiante est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est.nombre, est.edad, est.promedio);
}

// Ejercicio 5b
void modificarEstudiante(struct Estudiante *est) {
    est->edad = 30;
}

// Ejercicio 5c
void imprimirEstudiante2(struct Estudiante *est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est->nombre, est->edad, est->promedio);
}

void Ejercicio5() {

    struct Estudiante estudiante1;
    (estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;

    // Ejercicio 5a
    imprimirEstudiante(estudiante1);

    // Ejercicio 5b
    modificarEstudiante(&estudiante1);

    // Ejercicio 5c
    imprimirEstudiante2(&estudiante1);
}