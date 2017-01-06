/*******************************************************************************
 *  Auteur   : 
 *  Objectif : Exemple d'utilisation des vecteurs creux
 ******************************************************************************/

#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <stdlib.h>

#include "vecteur-creux.h"

#define Exemple 1

int main(){
	int dimension=10000;
	VecteurC test;
	Initialiser(&test, dimension);
	Ajouter(&test, 3, 4);
	printf("main executed");
	return EXIT_SUCCESS;
}

