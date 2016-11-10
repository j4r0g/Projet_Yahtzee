#include <stdio.h>
#include <stdlib.h>

#include "../header/structures.h"

void init_partie(nb_joueurs) {
		int i, j;
		for (i = 0; i < nb_joueurs; i++) {
				for (j = 0; j < 7; j++) {
						joueur[i].partie_mineure[j].score = 0;
						joueur[i].partie_majeure[j].score = 0;
				}
				joueur[i].partie_majeure[8] = 0;
		}
}

void init_relance(relance[]) {
		int i;
		for (i = 0; i < 5; i++) {
				relance[i] = 0;
		}
}
