Projet labyrinthe

structures:
int lancer[5];																/*tableau constitutif d'un lancer*/
int relance [5];															/*tableau indiquant pour chaque dé si il doit être relancé*/
struct score {char figure[12]; int scorefig};								/*structure d'un score (nom de la figure et valeur attribuée ou vide*/
//obligation d'utiliser des string + strcompar (sauf si traitement de char directement par tableau)
score partie_mineure [7];													/*partie mineure des figures (1-6 + sous total mineure)*/
score partie_majeure [8];													/*partie majeure (brelan, full, carré, petite suite, grande suite, yams, chance + sous total majeure)*/
struct joueur {score partie_mineure; score partie_majeure; int total};		/*structure du joueur (mineure1 + majeure1 + total de points)*/

fonctions:
	main();														/*fonction main*/
	init_partie(int nb_joueurs);								/*fonction qui initialise la partie en sachant le nombre de joueurs*/
		{->init_figure[];}										/*fonction qui initialise les tableaux de nom de figure*/
		{ init_scorefig;}										/*fonction qui initialise les scores de figures*/
		{->init_partie_mineure;}								/*fonction qui initialise la partie mineure d'un joueur*/
		{->init_partie_majeure;}								/*fonction qui initialise la partie majeure d'un joueur*/
	init_lancer(int lancer[]);									/*fonction qui initialise un lancer en connaissant le tableau*/
	lancer(joueur joueurN; int lancer[]);						/*fonction qui réalise un lancer*/
	afficher_lancer(int lancer[]);								/*fonction qui affiche un lancer*/
	relance(int niemejoueu; int lancer[]; int relance[]);		/*fonction qui effectue les relances demandées par le joueur*/
	attribution_score(joueur);									/*fonction qui attribue le score dans la case demandée*/
	calcul_parties();											/*fonction qui calcule les sous totaux des parties majeures et mineures*/
	victoire();													/*fonction qui détermine quel joueur est gagnant*/

structure de l'arborescence:

