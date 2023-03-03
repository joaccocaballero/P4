#ifndef SEGMENTO
#define SEGMENTO
#include "Punto.h"

class Segmento {
 private:
  Punto p1, p2;

 public:
  Segmento();
  Segmento(Punto, Punto);
  Segmento(Punto);
  Segmento(float, float, float, float);
  float largo();
};

#endif