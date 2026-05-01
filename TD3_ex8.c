/*
FONCTION UTILISER
affichertxt(mot[]:chaine de caractere)sans retour *sans retour=type void*
prendretxt(mot[]:chaine de caractere)sans retour
comptage_bigramme((mot[],bigramme[]):chaine de caractere)
FIN DECLARATION PROTOTYPE
DEBUT D'ALGORITME
	VARIABLES
		mot[50]:chaine de caractere
		bigramme[2]:chaine de caractere
	DEBUT
		affichertxt("Entrer un mot pour verifier le bigrame a compter")
		prendretxt(mot)
		affichertxt("Entrer le bigramme a compte")
		prendre(bigramme);
		comptage_bigramme(mot,bigramme)
	FIN
FIN D'ALGORITME
DEFINITION DES FONCTION
	affichertxt(mot[])
		DEBUT definition affichertxt
			AFFICHER mot
		FIN definition affichertxt
	prendretxt(mot[])
		DEBUT definition prendretxt
			LIRE(mot)
		FIN definition affichertxt
	comptage_bigrame(mot[],bigramme[])
		DEBUT definition comptage_bigrame
			VARIABLES
				i:entier
				compteur_caractere:entier
				compteur_occurence:entier
			DEBUT
				compteur_caractere⟵0
				compteur_occurence⟵0
				TANT QUE (mot[compteur_caractere]!='\0') FAIRE
					compteur_caractere⟵compteur_caractere+1
				FINT TANT QUE
				POUR(i⟵0;i<compteur_caractere-1;i⟵i+1) FAIRE
					SI (mot[i]==bigramme[0] ET mot[i+1]==bigramme[1]) ALORS
						compteur_occurence⟵compteur_occurences+1
					FIN SI
				FIN POUR
				AFFICHER "Le nombre de ",bigramme,"dans",mot,"est",compteur_occurence"
		FIN definition comptage_bigrame
*/
#include<stdio.h>
void affichertxt(char mot[]);
void prendretxt(char mot[]);
void comptage_bigramme(char mot[],char bigramme[]);
int main()
{
	char mot[50],bigramme[3];
	affichertxt("Entrer un mot pour verifier le bigrame a compter:");
	prendretxt(mot);
	//printf("%s",mot);
	affichertxt("\nEntrer le bigramme a compte:");
	prendretxt(bigramme);
	affichertxt("\n");
	comptage_bigramme(mot,bigramme);
	return 0;
}
//definition de affichertxt
void affichertxt(char mot[])
{
	printf ("%s",mot);
}
//definition prendretxt
void prendretxt(char mot[])
{
	scanf("%s",mot);
}
//definition comptage_bigramme
void comptage_bigramme(char mot[],char bigramme[])
{
	int i;
	int compteur_caractere=0;
	int compteur_occurence=0;
	while(mot[compteur_caractere]!='\0')
	{
		compteur_caractere++;
	}
	printf("%d \n",compteur_caractere);
	for(i=0;i<(compteur_caractere-1);i++)
	{
		if(mot[i]==bigramme[0] && mot[i+1]==bigramme[1])
		{
			compteur_occurence++;
		}
	}
	printf("Le nombre de %s dans %s est %d \n",bigramme,mot,compteur_occurence);
}
