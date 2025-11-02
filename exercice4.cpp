
#include <iostream>
using namespace std;

class Produit {
private:
    string nom;
    float prix;
    int quantite;
public:
    Produit(string n, float p, int q) {
        nom = n;
        prix = p;
        quantite = q;
    }
    friend ostream& operator<<(ostream& out, const Produit& p) {
        out << "Nom: " << p.nom << ", Prix: " << p.prix << ", Quantite: " << p.quantite;
        return out;
    }
};

int main() {
    Produit p1("Ordinateur", 7500.5, 3);
    cout << p1 << endl;
    return 0;
}
