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

date saisirDate() {
    date d;
    cout << "Saisir le jour : ";
    cin >> d.jour;

    cout << "Saisir le mois : ";
    cin >> d.mois;

    cout << "Saisir l'annee : ";
    cin >> d.annee;
}
void saisiemployer() {
    Employer em; 
    cout << "entrer votre nom :"<< endl;
    cin >> em.nom; 
    cout << "entrer votre prenom :" << endl;
    cin >> em.prenom; 
    cout << "entrer votre date d'embouche :" << endl;
    em.date_embouche = saisirDate();
    cout << "entrer votre date de fonction  :" << endl;
    em.date_fonction = saisirDate(); 
}
void affichage(Employer emp) {

    cout << " le nom est :" << emp.nom;
    cout << " le prenom est :" << emp.prenom;
    cout << "date d'embouche :" << emp.date_embouche.jour;
    cout << "date d'embouche :" << emp.date_embouche.mois;
    cout << "date d'embouche :" << emp.date_embouche.annee;
    cout << "date de focntion :" << emp.date_fonction.jour;
    cout << "date de focntion :" << emp.date_fonction.mois;
    cout << "date de focntion :" << emp.date_fonction.annee;
}
int main() {

    Employer emp1;
    emp1.prenom = "fedi";
    emp1.nom = "zitouni";
    // Affichage
    cout << "prenom : " << emp1.prenom << endl;
    cout << "nom : " << emp1.nom << endl;
    return 0;





}