#include<stdio.h>
#include<iostream>

using namespace std;

enum EEtat { vide, palette, rouleau };

struct SPalette {
	int poids;
	char reference[20];
};

struct SRouleau {
	float longueur;
	int numero;
};


struct SCasier {
	int px;
	int py;
	UContenu cont;
	EEtat etat;
};


union UContenu {
	SPalette pal;
	SRouleau roul;
};



void menuTransgerbeur() {
	cout << "Bienvenue dans le Transgerbeur";
	SCasier tabCasier[9];
	SRouleau  ro1;
	SPalette pa1;
	UContenu cont1;
	pa1.poids = 20;
	strcpy_s(pa1.reference, "The ric veut djin"); // ignisalisation des chaine de caractere
	EEtat etatC1;
	etatC1 = vide;
	cont1.pal = pa1;
	cont1.roul = ro1;//
	SCasier c1;
	SCasier c2;
	c1.cont = cont1;
	c1.etat = etatC1;//
	c1.px = 2;
	c1.py = 3;
	c2.cont = cont1;
	tabCasier[0] = c1;
	tabCasier[2] = c2;

}