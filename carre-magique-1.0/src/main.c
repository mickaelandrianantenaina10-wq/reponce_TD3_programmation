#include<stdio.h>
#include "tableau.h"
#include "recup_valeur.h"
int main(int argc,char **argv)
{
	int taille;
	prendreint(&taille);
	int tableau2d[taille][taille];
	remplissage_int_tab2d(taille,taille,tableau2d);
	affichage_int_tab2d(taille,taille,tableau2d);
	operation_carre_magique(taille,taille,tableau2d);
	return 0;
}
