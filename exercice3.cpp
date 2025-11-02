
#include <iostream>
#include <stdexcept>
using namespace std;

class Tableau {
private:
    int* data;
    int taille;
public:
    Tableau(int t) {
        taille = t;
        data = new int[taille];
        for (int i = 0; i < taille; i++) data[i] = 0;
    }
    int& operator[](int index) {
        if (index < 0 || index >= taille)
            throw out_of_range("Index invalide");
        return data[index];
    }
    ~Tableau() {
        delete[] data;
    }
};

int main() {
    Tableau tab(5);
    tab[0] = 10;
    tab[1] = 20;
    cout << tab[0] << " " << tab[1] << endl;
    try {
        cout << tab[10] << endl;
    } catch (const exception& e) {
        cout << "Erreur: " << e.what() << endl;
    }
    return 0;
}
