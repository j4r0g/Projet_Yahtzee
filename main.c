#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "./header/structures.h"
#include "./header/lancer.h"
#include "./header/score.h"
#include "./header/init.h"

#define nb_coups = 13;

void main () {
		int i, j;
		int nb_joueurs = 0;
		char relanceyn;
		t_list lancer_actuel;
		init_list(lancer_actuel);
		while (nb_joueurs == 0) {
			printf("Veuillez entrer le nombre de joueurs");
			scanf("%i", nb_joueurs);
		}
		init_partie(nb_joueurs);
		for (i=0; i < nb_coups; i++) {
				for (j = 0; j < nb_joueurs; j++) {
						init_relance(relance[]);
						printf ("Joueur %i:", j);
						lancer(j; lancer_actuel);
						afficher_lancer(lancer_actuel);
						printf("Voulez-vous relancer? (y/n");
						scanf("%c", relanceyn);
						if (relanceyn == 'y') {
							printf("Indiquez les dés que vous voulez relancer (1-5)");
							scanf ("%i %i %i %i %i", relance[0], relance[1], relance[2], relance[3], relance[4]);
							relance(j; lancer_actuel; relance[]);
							afficher(lancer_actuel);
							printf("Voulez-vous relancer à nouveau?(y/n)");
							scanf("%c", relanceyn);
							if (relanceyn == 'y'){
									printf ("Indiquez les dés que vous voulez relancer (1-5");
									scanf("%i %i %i %i %i", relance[0], relance[1], relance[2], relance[3], relance[4]);
									relance(j; lancer_actuel; relance[]);
									afficher(lancer_actuel);
								}
							}
							attribution_score;
						}
					}
		calcul_parties();
		victoire();
}
