#include "Segmento.h"
#include <cmath>

Segmento::Segmento() {}
// Se inicializan los miembros p1 y p2 con el constructor por defecto de
// Punto
Segmento::Segmento(Punto p1, Punto p2) {
  this->p1 = p1;
  this->p2 = p2;
}

float Segmento::largo() {
  return sqrt(pow(p2.getX() - p1.getX(), 2) + pow(p2.getY() - p2.getY(), 2));
}
