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
    return d;
}
Employer saisiemployer() {
    Employer em; 
    cout << "entrer votre nom :"<< endl;
    cin >> em.nom; 
    cout << "entrer votre prenom :" << endl;
    cin >> em.prenom; 
    cout << "entrer votre date d'embouche :" << endl;
    em.date_embouche = saisirDate();
    cout << "entrer votre date de fonction  :" << endl;
    em.date_fonction = saisirDate(); 
    return em; 
}
void affichage(Employer emp) {

    cout << " le nom est :" << emp.nom ;
    cout << " le prenom est :" << emp.prenom;
    cout << " jour demboche :" << emp.date_embouche.jour;
    cout << " mois d'embouche :" << emp.date_embouche.mois;
    cout << " annee d'embouche :" << emp.date_embouche.annee;
    cout << " jour de focntion :" << emp.date_fonction.jour;
    cout << " mois de focntion :" << emp.date_fonction.mois;
    cout << " annee de focntion :" << emp.date_fonction.annee;
}
int main() {

    Employer emp1=saisiemployer();
    
    affichage(emp1);





}