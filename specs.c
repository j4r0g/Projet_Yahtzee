Projet labyrinthe

fichier:
-type de dés [type_des]
-nombre de dés [nb_des]
-figures partie majeure (juste les noms)
	/*brelan = 3 identiques
	 * full = (nb_des/2) + [(nb_des/2)-1] si pair; (nb_des/2+1) + (nb_des/2) si impair
	 * carré = 4 identiques
	 * Xid = X identiques (si nb_des > 5); Xid^nb_des-1 (ex: 7 dés -> 5id; 6id)
	 * petite_suite = nb_des - 1 qui se suivent
	 * grande_suite = nb_des qui se suivent
	 * yams = nb_des identiques
	 * chance = somme_des (pas de règle spéciale, "joker")*/
-règles figures (voir au dessus) 				//mettre dans un autre fichier???

structures:

int lancer[nb_des];																	//tableau constitutif d'un lancer
int relance [nb_des];																//tableau indiquant pour chaque dé si il doit être relancé
struct score {char figure[12]; int scorefig};										//structure d'un score (nom de la figure et valeur attribuée ou vide
score partie_mineure [type_des+1];													//partie mineure des figures (1->type_des + sous total mineure)
score partie_majeure [type_des +3];													//partie majeure définie dans le fichier conf
struct joueur {score partie_mineure; score partie_majeure; int total};				//structure du joueur (mineure1 + majeure1 + total de points)
// remplacer partie_mineure & partie_majeure par des listes???

fonctions:
	main();														/*fonction main*/
	init_partie(int nb_joueurs);								/*fonction qui initialise la partie en sachant le nombre de joueurs et lit le fichier conf*/
		{->init_scorefig;}										/*fonction qui initialise les scores de figures*/
		{->init_partie_mineure(type_des);}						/*fonction qui initialise la partie mineure d'un joueur*/
		{->init_partie_majeure(typde_des);}						/*fonction qui initialise la partie majeure d'un joueur*/
	init_lancer(int lancer[], int nb_des);									/*fonction qui initialise un lancer en connaissant le tableau*/
	lancer(joueur joueurN; int lancer[], int nb_des);						/*fonction qui réalise un lancer*/
	afficher_lancer(int lancer[], int nb_des);								/*fonction qui affiche un lancer*/
	relance(int niemejoueur; int lancer[]; int relance[]);		/*fonction qui effectue les relances demandées par le joueur*/
	attribution_score(joueur);									/*fonction qui attribue le score dans la case demandée*/
	calcul_parties();											/*fonction qui calcule les sous totaux des parties majeures et mineures*/
	victoire();													/*fonction qui détermine quel joueur est gagnant*/

structure:
Projet/
	fonctions/
		init.c
		afficher.c
		manip_des.c
		score.c
	header/
		init.h
		afficher.h
		manip_des.h
		score.h
		structures.h
	main.c
	conf
