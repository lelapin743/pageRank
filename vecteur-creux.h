/*******************************************************************************
 *  Auteur   : Jonathan Claybrough
 *  Objectif : Spécification des vecteurs creux
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

//Initialise le pointeur de cellule à vide, taille à 0
void Initialiser(VecteurC* vect, int dimension);

//Libere la mémoire alloué pour le vecteurC
void Detruire(VecteurC* vect);

//Ajoute un élément en début de VecteurC
//Préconditions : -valeur != 0
//-indice < indice du premier élément de vect OU vecteurC vide
void Ajouter(VecteurC* vect, int indice, double  valeur);

//Alloue de la mémoire
Cellule allouerMem(Cellule* cellule, int indice, double valeur){

//Renvoie la norme du vecteur
int Norme(VecteurC vect);

//Renvoie le produit scalaire de deux vecteurs creux ayant la même dimension
int ProduitScalaireIter(VecteurC vect1, VecteurC vect2);

//Renvoie le produit scalaire de deux vecteurs creux ayant la même dimension
int ProduitScalaireRec(VecteurC vect1, VecteurC vect2);

//Renvoie un Vecteur Creux de même dimension qui est la somme des deux Vecteurs
//en entrée
VecteurC SommeVecteur(VecteurC vect1, VecteurC vect2);

//Change la ièeme valeur du Vecteur à la donnée rentrée. La "rajoute" si un zéro
int Changer(VecteurC vect, int newVal, int indice);

//Initialise un vecteur à partir de l'écriture au clavier par couples (indice,
//valeur)
void Saisir(VecteurC* vect);



#endif
