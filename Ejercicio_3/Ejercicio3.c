#include "Ejercicio3.h"
#include "../Ejercicio_1/Ejercicio1.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Estudiante copiarEstudiante(Estudiante est) {
    Estudiante nuevoEst;
    strcpy(nuevoEst.nombre, est.nombre);
    nuevoEst.edad = est.edad;
    nuevoEst.promedio = est.promedio;
    return nuevoEst;
}