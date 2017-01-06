#include "seatest.h"
#include "vecteur-creux.h"

/* -------------------------------------------------------------*
 *    Definition des SP de test                                 *
 * -------------------------------------------------------------*/

/*
 * Sous-programme de test du SP init
 */
void test_init()
{
	int dimension = 1000;
	VecteurC vect;
	Initialiser(&vect, dimension);
	assert_true(vect.taille==0);
	assert_true(vect.first==NULL);
	assert_true(vect.dimension == dimension);
}

// Sous-programme de test du SP detruire
void test_detruire(){
	int dimension = 1000;
	VecteurC vect;
	Initialiser(&vect, dimension);
	Detruire(&vect);
	assert_true(vect.first == NULL);
}


/*
 * Sous-programme de test du SP ajouter
 */
void test_ajouter()
{
	int indice1 = 200;
	int indice2 = 150;
	double valeur1 = 124;
	double valeur2 = -2;
	int dimension = 1000;
	VecteurC vect;
	Initialiser(&vect, dimension);
	Ajouter(&vect, indice1, valeur1);
	Ajouter(&vect, indice2, valeur2);

	assert_true(vect.first->indice == indice2);
	assert_true(vect.first->suivant->indice == indice1);
	assert_true(vect.first->suivant->coef == valeur1);
	assert_true(vect.first->coef = valeur1);
}

void test_norme(){
	
	
}


/* -------------------------------------------------------------*
 * Creation d'un jeu de tests dans le framework Seatest         *
 * Ici vous pouvez lancer un ensemble de tests a partir des     *
 * SP de test d√©finis ci-avant                                  *
 * -------------------------------------------------------------*/
void jeu_de_tests_1(void)
{
	test_fixture_start();      
	run_test(test_init);
	run_test(test_detruire);
	run_test(test_ajouter);
	test_fixture_end();
}

 // ... on peut definir plusieurs jeux de test si besoin ..


/* -------------------------------------------------------------*
 * Lancement de tous les jeus de test                           *
 * -------------------------------------------------------------*/
void all_tests( void )
{
	jeu_de_tests_1();
}

/* -------------------------------------------------------------*
 * Main qui lance tous les tests                                *
 * -------------------------------------------------------------*/
int main( int argc, char** argv )
{
	run_tests(all_tests);	
	return 0;
}
