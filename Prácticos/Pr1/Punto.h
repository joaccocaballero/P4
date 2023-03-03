#ifndef PUNTO
#define PUNTO

// Declaración
class Punto {
 private:
  float x, y;

 public:
  Punto();
  Punto(float x, float y);
  void setX(float);
  float getX();
  void setY(float);
  float getY();
};

#endif
