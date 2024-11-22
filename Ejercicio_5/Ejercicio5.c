#include "Ejercicio5.h"
#include "../Ejercicio_1/Ejercicio1.h"
#include <stdio.h>
void imprimirEstudiante(Estudiante est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est.nombre, est.edad, est.promedio);
}

void modificarEstudiante(Estudiante *est) {
    est->edad = 30;
}

void imprimirEstudiante2(Estudiante *est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est->nombre, est->edad, est->promedio);
}