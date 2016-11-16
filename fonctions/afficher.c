#include <stdio.h>
#include <stdlib.h>

#include "../header/structures.h"

void afficher_relance(int lancer[], int relance[], int nb_des) {
		int i;				//la fonction doit afficher le menu de relance et gérer les erreurs de saisies

void afficher_lancer(int lancer[], int nb_des) {
		int i;
		printf("Lancer actuel: \n");
		for (i = 0; i < nb_des; i++) {
				printf("De %i: ", i);
				printf("%i \n", lancer[i]);
		}
}
