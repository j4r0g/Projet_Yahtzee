#include <stdio.h>
#include <stdlib.h>

#include "../header/structures.h"


void init_scorefig(joueur joueurN, int type_des){
		int i;
		for (i = 0; i < type_des + 1; i++) {
				joueurN.partie_mineure[i].scorefig = 0;
		}
		for (i = 0; i < type_des + 3; i++) {
				joueurN.partie_majeure[i].scorefig = 0;
		}
}

void init_partie_mineure (int type_des) {
		int i;
		for (i = 1; i <= type_des; i++) {
				partie_mineure[i-1].score.figure = i+'0';
		}
		partie_mineure[type_des+1].score.figure = 'Total';
}

void init_partie_majeure (int type_des) {
		int i;
		partie_majeure[0].score.figure = 'brelan';
		partie_majeure[1].score.figure = 'full';
		partie_majeure[2].score.figure = 'carre';
		for (i = 5; i < type_des; i++) {
				partie_majeure[i-2].score.figure = i+'0';
		}
		partie_majeure[type_des-2].score.figure = 'petite_suite';
		partie_majeure[type_des-1].score.figure = 'grande_suite';
		partie_majeure[type_des].score.figure = 'yams';
		partie_majeure[type_des+1].score.figure = 'chance';
		partie_majeure[type_des+2].score.figure = 'Total';
}

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

void init_lancer(int lancer[], int nb_des) {
		int i;
		for (i = 0; i < nb_des; i++) {
				lancer[i] = 0;
		}
}
