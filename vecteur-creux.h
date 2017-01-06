/*******************************************************************************
 *  Auteur   : Jonathan Claybrough
 *  Objectif : Sp�cification des vecteurs creux
 ******************************************************************************/


#ifndef VECTEUR_CREUX_H
#define VECTEUR_CREUX_H
#include <stdio.h>
#include <stdlib.h>


struct Cellule{
	double coef; 
	int indice;
	struct Cellule* suivant;
};

typedef struct Cellule Cellule;

struct VecteurC{
	struct Cellule* first;
	int taille;
	int dimension;
};
typedef struct VecteurC VecteurC;

//Initialise le pointeur de cellule � vide, taille � 0
void Initialiser(VecteurC* vect, int dimension);

//Libere la m�moire allou� pour le vecteurC
void Detruire(VecteurC* vect);

//Ajoute un �l�ment en d�but de VecteurC
//Pr�conditions : -valeur != 0
//-indice < indice du premier �l�ment de vect OU vecteurC vide
void Ajouter(VecteurC* vect, int indice, double  valeur);

//Alloue de la m�moire
Cellule allouerMem(Cellule* cellule, int indice, double valeur){

//Renvoie la norme du vecteur
int Norme(VecteurC vect);

//Renvoie le produit scalaire de deux vecteurs creux ayant la m�me dimension
int ProduitScalaireIter(VecteurC vect1, VecteurC vect2);

//Renvoie le produit scalaire de deux vecteurs creux ayant la m�me dimension
int ProduitScalaireRec(VecteurC vect1, VecteurC vect2);

//Renvoie un Vecteur Creux de m�me dimension qui est la somme des deux Vecteurs
//en entr�e
VecteurC SommeVecteur(VecteurC vect1, VecteurC vect2);

//Change la i�eme valeur du Vecteur � la donn�e rentr�e. La "rajoute" si un z�ro
int Changer(VecteurC vect, int newVal, int indice);

//Initialise un vecteur � partir de l'�criture au clavier par couples (indice,
//valeur)
void Saisir(VecteurC* vect);



#endif
