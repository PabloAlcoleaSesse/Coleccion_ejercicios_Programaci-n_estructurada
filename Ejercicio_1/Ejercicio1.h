#ifndef EJERCICIO1_H
#define EJERCICIO1_H


// Definición de la estructura Estudiante
typedef struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
    struct Estudiante *siguiente; // Para la lista enlazada
} Estudiante;

// Declaraciones de funciones para manejar la lista de estudiantes
void agregarEstudiante(Estudiante **cabeza, const char *nombre, int edad, float promedio);
void mostrarEstudiantes(Estudiante *cabeza);
void eliminarEstudiante(Estudiante **cabeza, const char *nombre);

#endif