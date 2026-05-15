//triangle de pascal
/*
ALGORITHME TrianglePascal

FONCTION afficher(mot : TABLEAU DE CARACTERES)
FONCTION prendreint(nombre : POINTEUR SUR ENTIER)
FONCTION triangle_pascal(taille : ENTIER)

DEBUT PRINCIPAL
    DECLARER taille : ENTIER
    APPELER afficher("Entrer le taille du triangle de pascal:")
    APPELER prendreint(&taille)
    APPELER triangle_pascal(taille)
FIN

FONCTION afficher(mot : TABLEAU DE CARACTERES)
DEBUT
    ECRIRE mot
FIN

FONCTION prendreint(nombre : POINTEUR SUR ENTIER)
DEBUT
    LIRE nombre
FIN

FONCTION triangle_pascal(taille : ENTIER)
VAR
    tab2D : TABLEAU[taille][taille] D'ENTIERS
    i, j : ENTIERS

DEBUT
    POUR i ← 0 A taille-1 FAIRE
        POUR j ← 0 A i FAIRE
            SI j = 0 OU j = i ALORS
                tab2D[i][j] ← 1
            SINON
                tab2D[i][j] ← tab2D[i-1][j] + tab2D[i-1][j-1]
            FIN SI
            ECRIRE tab2D[i][j], " "
        FIN POUR
        ECRIRE "\n"
    FIN POUR
FIN
*/
#include<stdio.h>
void afficher(char mot[]);
void prendreint(int *nombre);
void triangle_pascal(int taille);
int main()
{
	int taille;
	afficher("Entrer le taille du triangle de pascal:");
	prendreint(&taille);
	triangle_pascal(taille);
	return 0;
}
void afficher(char mot[])
{
	printf("%s",mot);
}
void prendreint(int *nombre)
{
	scanf("%d",nombre);
}
void triangle_pascal(int taille)
{
	int tab2D[taille][taille];
	int i,j;
	for(i=0;i<taille;i++)
	{
		for (j=0;j<=i;j++)
		{
			if (j==0 || j==i)
			{
				tab2D[i][j]=1;
			}
			else
			{
				tab2D[i][j]=tab2D[i-1][j]+tab2D[i-1][j-1];
			}
			printf("%d ",tab2D[i][j]);
		}
		printf("\n");
	}
}
