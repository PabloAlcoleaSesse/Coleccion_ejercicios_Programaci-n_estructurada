#include "Ejercicio3.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../Ejercicio_1/Ejercicio1.h"

struct Estudiante copiarEstudiante(struct Estudiante est) {
    struct Estudiante nuevoEst;
    strcpy(nuevoEst.nombre, est.nombre);
    nuevoEst.edad = est.edad;
    nuevoEst.promedio = est.promedio;
    return nuevoEst;
}