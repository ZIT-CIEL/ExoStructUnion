#include <iostream>
#include <iomanip> // Pour std::hex et std::setfill

using namespace std;


struct Srgb {
    unsigned char r;
    unsigned char g;
    unsigned char b;
};


union UColor {
    Srgb components;
    unsigned char tabCol[3];
    unsigned int val;
};

int main() {
    UColor color;
    int choice;

    cout << "Choisissez un mode de saisie de la couleur :\n";
    cout << "1. Par composantes R, G, B\n";
    cout << "2. Par une valeur entière unique\n";
    cin >> choice;

    if (choice == 1) {
        // Saisie des composantes R, G et B
        cout << "Entrez les valeurs de R, G et B (0-255) :\n";
        cin >> color.components.r >> color.components.g >> color.components.b;

        // Conversion automatique en valeur entière
        color.val = (color.components.b << 16) | (color.components.g << 8) | color.components.r;
    }
    else if (choice == 2) {
        // Saisie de la valeur entière unique
        cout << "Entrez une valeur entière unique (0 - 16777215) :\n";
        cin >> color.val;

        // Conversion automatique en composantes R, G, B
        color.components.r = color.val & 0xFF;
        color.components.g = (color.val >> 8) & 0xFF;
        color.components.b = (color.val >> 16) & 0xFF;
    }
    else {
        cout << "Choix invalide.\n";
        return 1;
    }

    // Affichage des résultats
    cout << "\nReprésentation de la couleur :\n";
    cout << "1. Composantes R, G, B : "
        << "R = " << static_cast<int>(color.components.r) << ", "
        << "G = " << static_cast<int>(color.components.g) << ", "
        << "B = " << static_cast<int>(color.components.b) << "\n";

    cout << "2. Tableau d'octets : ["
        << static_cast<int>(color.tabCol[0]) << ", "
        << static_cast<int>(color.tabCol[1]) << ", "
        << static_cast<int>(color.tabCol[2]) << "]\n";

    cout << "3. Valeur entiere unique : 0x"
        << hex << setw(6) << setfill('0') << color.val << dec << "\n";

    return 0; 
}