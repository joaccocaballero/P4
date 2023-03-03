#include <cmath>

class Punto {
public:
    double x, y;
    Punto(double _x = 0, double _y = 0) : x(_x), y(_y) {}
    void set(double _x, double _y) {
        x = _x;
        y = _y;
    }
    double distancia(const Punto& otro) const {
        double dx = x - otro.x;
        double dy = y - otro.y;
        return std::sqrt(dx*dx + dy*dy);
    }
};

class Segmento {
public:
    Punto p1, p2;

    Segmento(const Punto& _p1, const Punto& _p2) : p1(_p1), p2(_p2) {}

    double longitud() const {
        return p1.distancia(p2);
    }
};

#include <iostream>

int main() {
    Punto p1(0, 0);
    Punto p2(3, 4);
    std::cout << "Distancia entre p1 y p2: " << p1.distancia(p2) << std::endl;

    Segmento s(p1, p2);
    std::cout << "Longitud del segmento s: " << s.longitud() << std::endl;

    return 0;
}