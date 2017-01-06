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
}

// Sous-programme de test du SP detruire
void test_detruire(){
}


/*
 * Sous-programme de test du SP ajouter
 */
void test_ajouter()
{
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
