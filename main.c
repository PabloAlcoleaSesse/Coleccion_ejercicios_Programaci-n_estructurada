
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Estudiante Estudiante;

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};
struct Estudiante copiarEstudiante(struct Estudiante est) {
    struct Estudiante nuevoEst;
    strcpy(nuevoEst.nombre, est.nombre);
    nuevoEst.edad = est.edad;
    nuevoEst.promedio = est.promedio;
    return nuevoEst;
};
void imprimirEstudiante(Estudiante est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est.nombre, est.edad, est.promedio);
}
void modificarEstudiante(Estudiante *est) {
    est->edad = 30;
}
void imprimirEstudiante2(Estudiante *est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est->nombre, est->edad, est->promedio);
}

int main() {
    struct Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;

    struct Estudiante *estudiante2 = (struct Estudiante *) malloc(sizeof(struct Estudiante));
    strcpy(estudiante2->nombre, "Ana");
    estudiante2->edad = 22;
    estudiante2->promedio = 9.8;

    struct Estudiante *punteroEst = &estudiante1;
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", punteroEst->nombre, punteroEst->edad, punteroEst->promedio);

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

    Estudiante estudiante3;
    strcpy(estudiante3.nombre, "Pedro");
    estudiante3.edad = 25;
    estudiante3.promedio = 9.7;

    imprimirEstudiante(estudiante1);


    modificarEstudiante(&estudiante1);

    imprimirEstudiante2(&estudiante1);
}