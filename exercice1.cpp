
#include <iostream>
using namespace std;

class Vecteur2D {
private:
    float x, y;
public:
    Vecteur2D(float x_val = 0, float y_val = 0) {
        x = x_val;
        y = y_val;
    }
    Vecteur2D operator+(const Vecteur2D& autre) const {
        return Vecteur2D(x + autre.x, y + autre.y);
    }
    void afficher() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Vecteur2D v1(2.5, 3.0), v2(1.5, -2.0);
    Vecteur2D v3 = v1 + v2;
    v3.afficher();
    return 0;
}
