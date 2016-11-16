#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../header/structures.h"

#define RAND_MAX (type_des-1)

void lancer (int lancer[], int nb_des) {
		int i;
		srand(time(0));
		for (i = 0; i < nb_des; i++) {
				lancer[i] = rand();
		}
}

void relance (int lancer[], int relance[], int nb_des) {
		int i;
		srand(time(0));
		for (i = 0; i < nb_des; i++) {
				if (relance[i] == 1) {
						lancer[i] = rand();
				}
		}
}
