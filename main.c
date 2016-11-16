#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "./header/structures.h"
#include "./header/lancer.h"
#include "./header/score.h"
#include "./header/init.h"


void main () {
		int i, j;
		int nb_joueurs = 0;
		char relanceyn;
		t_list lancer_actuel;
		init_list(lancer_actuel);
		while (nb_joueurs <= 0) {
			printf("Veuillez entrer le nombre de joueurs");
			scanf("%i", nb_joueurs);
		}
		init_partie(nb_joueurs);
		for (i = 0; i < nb_coups; i++) {
				for (j = 0; j < nb_joueurs; j++) {
						init_lancer(lancer_actuel[]);
						printf ("Joueur %i:", j);
				}
				attribution_score;
		}
		calcul_parties();
		victoire();
}
