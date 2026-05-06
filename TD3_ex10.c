/*
ALGORITHME
VARIABLES
    lettre : CHAÎNE DE CARACTÈRES (TAILLE MAX 500)
    conservateur : CHAÎNE DE CARACTÈRES (TAILLE MAX 500)
    i, compteur, a : ENTIERS
DÉBUT
    AFFICHER("Entrer une lettre :")
    SAISIR lettre
    compteur ← 0
    TANT QUE lettre[compteur] ≠ '\0' FAIRE
        compteur ← compteur + 1
    FIN TANT QUE
    a ← 0
    POUR i DE 0 À compteur-1 FAIRE
        SI lettre[i] = 'a' OU lettre[i] = 'e' OU lettre[i] = 'i' OU lettre[i] = 'o' OU lettre[i] = 'u' OU lettre[i] = 'y' ALORS
            conservateur[a] ← lettre[i]
            conservateur[a+1] ← 'I'
            conservateur[a+2] ← 'T'
            a ← a + 3
        SINON
            conservateur[a] ← lettre[i]
            a ← a + 1
        FIN SI
    FIN POUR
    conservateur[a] ← '\0'
    AFFICHER(conservateur)
    AFFICHER("\n")
FIN
*/
#include<stdio.h>
int main()
{
	char lettre[500],conservateur[500];
	int i,compteur=0;
	int a;
	printf("Entrer une lettre :");
	scanf("%[^\n]",lettre);
	while (lettre[compteur] != '\0')
	{
		 	compteur++;
	}
	a=0;
	for (i=0;i<compteur;i++)
	{
		
		if (lettre [i]=='a' || lettre[i] =='e'||lettre[i]=='i' || lettre[i]=='o'||lettre[i]=='u' || lettre[i] =='y')
		{
			conservateur[a]=lettre[i];
			conservateur[a+1]='I';
			conservateur[a+2]='T';
			a=a+3;
		}
		else
		{
			conservateur[a]=lettre[i];
			a++;
		}
	}
	conservateur[a]='\0';
	printf("%s\n",conservateur);
	return 0;
}

