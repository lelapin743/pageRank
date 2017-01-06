#include <stdio.h>
#include <stdlib.h>

typedef matrice;
void ajouter_lien(matrice* m, int i, in j);
//ajoute un lien dans la matrice d'adjacence etnre les noeuds i et j 
void init_matrice(matrice* m, int n);


int main(int argc, char* argcv[]){
	char* nomFichier;
	init_param(argc, argv, &I, &A, &nomFichier); //faut tester que ça a marché?
	//ici, on a lu les params avec succes
	//Lecture du fichier
	FILE* f = fopen(nomFicher, "r"); //r, w, rw
	if (f) { //f n'est pas NULL, fichier existant
		int N;
		int nblu = fscanf(f,"%i",&N);
		if (nblu<1||(N<0)) {
			printf("erreur de lecture");
		}
		else {
			init_matrice(&mat, N);
			//lecture de toutes les lignes
			while (!feof(f)){
				int i,j;
				if (fscanf(f,"%i",&i)<1||fscanf(f,"%j",&j)<1){
					bool erreurlecture = true;
				}
				else {
					ajouter_lien(&mat, i ,j)
				}
			}
		}

	}
	

	return EXIT_SUCCESS;
}

