//carre magique
/*
ALGORITHME CarreMagique

FONCTION affichage(mot : TABLEAU DE CARACTERES)
FONCTION prendreint(nombre : POINTEUR SUR ENTIER)
FONCTION operationcaremagique(taille : ENTIER)

DEBUT PRINCIPAL
    DECLARER n : ENTIER
    APPELER affichage("Entrer la taille du carre des nombre...")
    APPELER prendreint(&n)
    APPELER operationcaremagique(n)
FIN

FONCTION affichage(mot : TABLEAU DE CARACTERES)
DEBUT
    ECRIRE mot
FIN

FONCTION prendreint(nombre : POINTEUR SUR ENTIER)
DEBUT
    LIRE nombre
FIN

FONCTION operationcaremagique(taille : ENTIER)
VAR
    care : TABLEAU[taille][taille] D'ENTIERS
    i, j, ligne, cologne : ENTIERS
    sommeligne[taille] : TABLEAU D'ENTIERS
    sommecologne[taille] : TABLEAU D'ENTIERS
    inegalite : ENTIER

DEBUT
    POUR i ← 0 A taille-1 FAIRE
        sommeligne[i] ← 0
        sommecologne[i] ← 0
    FIN POUR

    POUR i ← 0 A taille-1 FAIRE
        POUR j ← 0 A taille-1 FAIRE
            ECRIRE "Entrer la valeur dans la case ligne ", i+1, " colonne ", j+1
            LIRE care[i][j]
        FIN POUR
    FIN POUR

    ligne ← 0
    POUR i ← 0 A taille-1 FAIRE
        POUR j ← 0 A taille-1 FAIRE
            sommeligne[ligne] ← sommeligne[ligne] + care[i][j]
        FIN POUR
        ligne ← ligne + 1
    FIN POUR

    cologne ← 0
    POUR j ← 0 A taille-1 FAIRE
        POUR i ← 0 A taille-1 FAIRE
            sommecologne[cologne] ← sommecologne[cologne] + care[i][j]
        FIN POUR
        cologne ← cologne + 1
    FIN POUR

    inegalite ← 0
    POUR i ← 0 A taille-1 FAIRE
        POUR j ← 0 A taille-1 FAIRE
            SI sommecologne[i] ≠ sommecologne[j] ALORS
                inegalite ← inegalite + 1
            FIN SI
        FIN POUR
    FIN POUR

    POUR i ← 0 A taille-1 FAIRE
        POUR j ← 0 A taille-1 FAIRE
            SI sommeligne[i] ≠ sommeligne[j] ALORS
                inegalite ← inegalite + 1
            FIN SI
        FIN POUR
    FIN POUR

    POUR i ← 0 A taille-1 FAIRE
        POUR j ← 0 A taille-1 FAIRE
            SI sommecologne[i] ≠ sommeligne[j] ALORS
                inegalite ← inegalite + 1
            FIN SI
        FIN POUR
    FIN POUR

    SI inegalite = 0 ALORS
        ECRIRE "Le caree est magique"
    SINON
        ECRIRE "Le care n'est PAS magique"
    FIN SI
FIN
*/
#include<stdio.h>
void affichage(char mot[]);
void prendreint(int *nombre);
void operationcaremagique(int taille);
int main()
{
	int n;
	affichage("Entrer la taille du carre des nombre(i.e le nombre entrer sera le nombre de ligne et du colone):");
	prendreint(&n);
	operationcaremagique(n);
	return 0;
}
void affichage(char mot[])
{
	printf("%s",mot);
}
void prendreint(int *nombre)
{
	scanf("%d",nombre);
}
void operationcaremagique(int taille)
{
	int care[taille][taille],i,j;
	int sommeligne[taille];
	int ligne=0,cologne=0;
	for (i=0;i<taille;i++)
	{
		sommeligne[i]=0;
	}
	int sommecologne[taille];
	for (i=0;i<taille;i++)
	{
		sommecologne[i]=0;
	}
	for (i=0;i<taille;i++)
	{
		for (j=0;j<taille;j++)
		{
			printf("Entrer la valeur dans le case de ligne %d et de colonne %d du tableau tab:",i+1,j+1);
			scanf("%d",&care[i][j]);
		}
	}
	for (i=0;i<taille;i++)
	{
		for (j=0;j<taille;j++)
		{
			sommeligne[ligne]=sommeligne[ligne]+care[i][j];
		}
		ligne++;
	}
	for (j=0;j<taille;j++)
	{
		for (i=0;i<taille;i++)
		{
			sommecologne[cologne]=sommecologne[cologne]+care[i][j];
		}
		cologne++;
	}
	int inegalite=0;
	for (i=0;i<taille;i++)
	{
		for(j=0;j<taille;j++)
		{
			if(sommecologne[i]!=sommecologne[j])
			{
				inegalite++;
			}
		}
	}
	for (i=0;i<taille;i++)
	{
		for(j=0;j<taille;j++)
		{
			if(sommeligne[i]!=sommeligne[j])
			{
				inegalite++;
			}
		}
	}
	for (i=0;i<taille;i++)
	{
		for(j=0;j<taille;j++)
		{
			if(sommecologne[i]!=sommeligne[j])
			{
				inegalite++;
			}
		}
	}
	if (inegalite==0)
	{
		printf("Le caree est magique");
	}
	else
	{
		printf("Le care n'est PAS magique");
	}
}
