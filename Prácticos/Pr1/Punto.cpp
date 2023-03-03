#include "Punto.h"
#include <iostream>

// Implementación
void Punto::setX(float x) { this->x = x; }
float Punto::getX() { return this->x; }
void Punto::setY(float y) { this->y = y; }
float Punto::getY() { return this->y; }

Punto::Punto() {
  this->x = 0.0;
  this->y = 0.0;
}
Punto::Punto(float x, float y) {
  this->x = x;
  this->y = y;
}
 int main(){
    Punto p = Punto(2,0);
    std::cout << "el punto es: " << "("<< p.getX()<<"," <<p.getY()<<")"<< std::endl;
    return 0;
 }