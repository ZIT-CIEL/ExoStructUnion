#include<stdio.h>
#include<iostream>

using namespace std;

enum class  EEtat { vide=0, palette=1, rouleau=2  };

struct SPalette {
	int poids;
	char reference[20];
};

struct SRouleau {
	float longueur;
	int numero;
};

union UContenu {
	SPalette pal;
	SRouleau roul;
};
struct SCasier {
	int px;
	int py;
	UContenu cont;
	EEtat etat;
};






void menuTransgerbeur() {
	cout << "Bienvenue dans le Transgerbeur";
	SCasier tabCasier[9];
	SRouleau  ro1;
	SPalette pa1;
	UContenu cont1;
	ro1.longueur = 1;
	ro1.numero = 2;
	pa1.poids = 20;
	strcpy_s(pa1.reference, "The ric veut djin"); // ignisalisation des chaine de caractere
	EEtat etatC1;
	etatC1= EEtat::vide ;
	cont1.pal = pa1;
	cont1.roul = ro1;//
	SCasier c1;
	SCasier c2;
	c2.etat = etatC1;
	c2.px = 1;
	c2.py = 2;
	c1.cont = cont1;
	c1.etat = etatC1;//
	c1.px = 2;
	c1.py = 3;
	c2.cont = cont1;
	tabCasier[0] = c1;
	tabCasier[2] = c2;
	cout << endl << " la taille est de : " <<  sizeof(ro1);
}
int main() {
	menuTransgerbeur(); // Call the menu function
	return 0;
}	