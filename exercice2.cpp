
#include <iostream>
using namespace std;

class Date {
private:
    int jour, mois, annee;
public:
    Date(int j = 1, int m = 1, int a = 2000) {
        jour = j;
        mois = m;
        annee = a;
    }
    bool operator==(const Date& autre) const {
        return (jour == autre.jour && mois == autre.mois && annee == autre.annee);
    }
    bool operator!=(const Date& autre) const {
        return !(*this == autre);
    }
    void afficher() const {
        cout << jour << "/" << mois << "/" << annee << endl;
    }
};

int main() {
    Date d1(2, 11, 2025), d2(2, 11, 2025), d3(1, 1, 2024);
    cout << "d1 : "; d1.afficher();
    cout << "d2 : "; d2.afficher();
    cout << "d3 : "; d3.afficher();
    if (d1 == d2) cout << "d1 et d2 sont identiques" << endl;
    if (d1 != d3) cout << "d1 et d3 sont differentes" << endl;
    return 0;
}
