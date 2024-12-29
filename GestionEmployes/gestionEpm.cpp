#include<stdio.h>
#include<iostream>
#include <string.h>
using namespace std;
struct date {

	int jour; 
	int mois; 
	int	annee; 

};
bool verifierDate(date d) {
    // Vérifie que le mois est entre 1 et 12
    if (d.mois < 1 || d.mois > 12) {
        return false;
    }
    // Vérifie que le jour est entre 1 et 30
    if (d.jour < 1 || d.jour > 30) {
        return false;
    }
    // L'année peut être >= 0
    if (d.annee < 0) {
        return false;
    }
    return true;
}
struct Employer {

    string nom;
    string  prenom;

    date  date_embouche; 
    date  date_fonction; 

};
int main() {

    Employer emp1 ; 
    emp1.prenom = "fedi";
    emp1.nom = "zitouni";
    // Affichage
    cout << "prenom : " << emp1.prenom << endl;
    cout << "nom : " << emp1.nom << endl;
    return 0;




    
}