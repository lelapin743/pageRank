/*******************************************************************************
 *  Auteur   : 
 *  Objectif : Implantation des vecteurs creux
 ******************************************************************************/
#include "vecteur-creux.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//Initialise le pointeur de cellule à vide, taille à 0
void Initialiser(VecteurC* vect, int dimension){
	vect->taille=0;
	vect->first=NULL;
	vect->dimension = dimension;
}

//Libere la mémoire alloué pour le vecteurC
void Detruire(VecteurC* vect){
		Cellule* buffer  = vect->first;
	while (vect->first  != NULL){
		buffer = vect->first->suivant;
		free(vect->first);
		vect->first = buffer;
	}
}

//Ajoute un élément en début de VecteurC
//Préconditions : -valeur != 0
//-indice < indice du premier élément de vect OU vecteurC vide
void Ajouter(VecteurC* vect, int indice, double valeur){
	assert(valeur!=0);
	if (vect->taille>0) {
		if (indice < vect->first->indice) {
			
			Cellule* new = malloc(sizeof(Cellule));
			new->indice = indice;
			new->coef  = valeur;
			new->suivant = vect->first;
			vect->first = new;
		}
		else 
		{
			printf("L'indice est trop grand");
		}
	
	}
	else //si vide
	{
		allouerMem(vect->first, 
		Cellule* new = malloc(sizeof(Cellule));
		new->indice = indice;
		new->coef  = valeur;
		new->suivant = NULL;
		vect->first = new;
	}
}

//Alloue de la mémoire et initialise cellule avec ce qui est fournit
Cellule allouerMem(Cellule* cellule, int indice, double valeur){
		Cellule* new = malloc(sizeof(Cellule));
		new->indice = indice;
		new->coef  = valeur;
		new->suivant = NULL;
		vect->first = new;
}


//Renvoie la norme du vecteur
int Norme(VecteurC vect){
	return 0;
}

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






