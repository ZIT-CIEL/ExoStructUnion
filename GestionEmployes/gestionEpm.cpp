#include<stdio.h>
#include<iostream>

using namespace std;
struct date {

	int jour; 
	int mois; 
	int	annee; 

};
bool verifierDate(date d) {
    // V�rifie que le mois est entre 1 et 12
    if (d.mois < 1 || d.mois > 12) {
        return false;
    }
    // V�rifie que le jour est entre 1 et 30
    if (d.jour < 1 || d.jour > 30) {
        return false;
    }
    // L'ann�e peut �tre >= 0
    if (d.annee < 0) {
        return false;
    }
    return true;
}
struct Employer {

    char nom; 
    char prrenom; 
    int date_embouche; 
    int date_fonction; 






};