#include <stdio.h>
#include <stdlib.h>


#define SYNTAX_ERROR 42 
#define ERROR 43 
#define VALEUR_DEFAUT_I 150 
#define VALEUR_DEFAUT_A 0.85


int printSyntax(){
	printf("\nVeuillez utiliser la syntaxe de cet exemple : \n./pagerank [-I 150] [-A 0.90] exemple.net");
	return 1;
}

int init_param(int argc, char* argv[], int* I, float* A, char* nomFichier){
	if (argc<3||argc>6||argc==3||argc==5){
		printf("\nVous n'avez pas rentré un bon nombre d'argument");
		printSyntax;
		return SYNTAX_ERROR;
	}
	else {
		*nomFichier = argv[argc-1]; //Initialisation du nom de fichier
		*I = VALEUR_DEFAUT_I;
		*A = VALEUR_DEFAUT_A;
		if (argc>3) {
			for (int i =1; i+=2; i<argc-1){
				if (argv[i]=="-I"){
					*I = atoi(&argv[i+1]);
					if (*I == ERROR||I > 150||I<=0) {
						printf("\nI n'est pas un entier strictement positif <= 150");
						printSyntax;
						return ERROR;
					}			
				}
				else if (argv[i]=="-A"){
					*A = atof(&argv[i+1]);
					if (*A==ERROR) {
						printf("\nA n'est pas un flottant");
						printSyntax;
						return ERROR;
					}
					if (*A>1||*A<=0){
						printf("A n'est pas compris entre 0 et 1");
						printSyntax;
						return ERROR;
					}
				}
			}
		}	
	}	
}

int main(int argc, char* argv[]){
	//si un des paramètres n'est pas sensé apparaitre mais que ça marche, on peut l'ignorer
	//si l'entrée donnée est invalide, on print la bonne syntaxe.
	char* nomFichier;	
	int I;
	float A;
	init_param(argc, argv, &I, &A, &nomFichier); 	
	
}



/*arv un tableau de chaines de charactères (finis par ...)
 *pour entrée : ./pagerank -I 150 -A 0.90 exemple.net
 *on a argv[0]="./pagerank" , ...
 *
 *argc contient le nombre d'arguments
 *
 *int atoi(char* str)
 *float atof(char* str)
 *
 *Dans le rapport, faut expliqur comment fonctionne la ligne de commande (genre si ya deux -A, ça prend le dernier;..)
 *
 *
 *
 *
 *
 *
 *
 *
 */











