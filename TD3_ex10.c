/*
ALGORITHME INSERER_IT
VARIABLES
    lettre, conservateur : CHAÎNES
    i, compteur, a : ENTIERS
DÉBUT
    ÉCRIRE "Entrer une lettre :"
    LIRE lettre

    // Calcul de la longueur de la chaîne
    compteur ← 0
    TANT QUE lettre[compteur] ≠ '\0' FAIRE
        compteur ← compteur + 1
    FIN TANT QUE

    a ← 0
    POUR i ← 0 JUSQU'À compteur-1 FAIRE
        SI (lettre[i] ≠ 'a' ET lettre[i] ≠ 'e' ET lettre[i] ≠ 'i' ET
            lettre[i] ≠ 'o' ET lettre[i] ≠ 'u' ET lettre[i] ≠ 'y')
           ET
           (lettre[i+1] = 'a' OU lettre[i+1] = 'e' OU lettre[i+1] = 'i' OU
            lettre[i+1] = 'o' OU lettre[i+1] = 'u' OU lettre[i+1] = 'y')
        ALORS
            conservateur[a]   ← lettre[i]
            conservateur[a+1] ← 'I'
            conservateur[a+2] ← 'T'
            conservateur[a+3] ← lettre[i+1]
            a ← a + 4
            i ← i + 1   // Sauter la voyelle déjà traitée
        SINON
            conservateur[a] ← lettre[i]
            a ← a + 1
        FIN SI
    FIN POUR

    conservateur[a] ← '\0'
    ÉCRIRE conservateur
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
		
		if (((lettre [i]!='a' && lettre[i] !='e' && lettre[i]!='i' && lettre[i]!='o' && lettre[i]!='u' && lettre[i] !='y')&&(lettre [i+1]=='a' || lettre[i+1] =='e'||lettre[i+1]=='i' || lettre[i+1]=='o'||lettre[i+1]=='u' || lettre[i+1] =='y')&&(lettre[i]!=' ')))
		{
			conservateur[a]=lettre[i];
			conservateur[a+1]='I';
			conservateur[a+2]='T';
			conservateur[a+3]=lettre[i+1];
			a=a+4;
			i++;
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

