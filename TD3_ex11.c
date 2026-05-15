/*
ALGORITHME Principal
    FONCTION affichage(mot : TABLEAU DE CARACTERES)
    FONCTION prendrechar(texte : TABLEAU DE CARACTERES)
    FONCTION decriptage(texte : TABLEAU DE CARACTERES)

DEBUT
    DECLARER texte[500] : TABLEAU DE CARACTERES

    APPELER affichage("Entrer votre texte:")
    APPELER prendrechar(texte)
    APPELER affichage("Le mot decripte est:\n")
    APPELER decriptage(texte)

FIN
FONCTION affichage(mot : TABLEAU DE CARACTERES)
DEBUT
    ECRIRE mot
FIN
FONCTION prendrechar(texte : TABLEAU DE CARACTERES)
DEBUT
    LIRE LIGNE COMPLETE JUSQU'A '\n' DANS texte
FIN
FONCTION decriptage(texte : TABLEAU DE CARACTERES)
VAR
    i, j, nb_car : ENTIERS
    motdecripte[500] : TABLEAU DE CARACTERES
DEBUT
    nb_car ← 0
    TANT QUE texte[nb_car] ≠ '\0' FAIRE
        nb_car ← nb_car + 1
    FIN TANT QUE

    i ← 0
    j ← 0
    TANT QUE i < nb_car FAIRE
        SI (texte[i] ≠ 'a' ET texte[i] ≠ 'o' ET texte[i] ≠ 'i' 
            ET texte[i] ≠ 'e' ET texte[i] ≠ 'y' ET texte[i] ≠ ' ')
            ET (texte[i+1] = 'I' ET texte[i+2] = 'T')
            ET (texte[i+3] = 'a' OU texte[i+3] = 'o' OU texte[i+3] = 'i'
                OU texte[i+3] = 'e' OU texte[i+3] = 'y') ALORS

            motdecripte[j] ← texte[i]
            motdecripte[j+1] ← texte[i+3]
            i ← i + 4
            j ← j + 2
        SINON
            motdecripte[j] ← texte[i]
            i ← i + 1
            j ← j + 1
        FIN SI
    FIN TANT QUE

    motdecripte[j] ← '\0'
    ECRIRE motdecripte
FIN
*/
#include<stdio.h>
void affichage(char mot[]);
void prendrechar(char texte[]);
void decriptage(char texte[]);
int main()
{
	char texte[500];
	affichage("Entrer votre texte:");
	prendrechar(texte);
	affichage("Le mot decripte est:\n");
	decriptage(texte);
	return 0;
}
void affichage(char mot[])
{
	printf("%s",mot);
}
void prendrechar(char texte[])
{
	scanf ("%[^\n]",texte);
}
void decriptage(char texte[])
{
	int i=0,j=0,nb_car=0;//nb_car :nombre caracter
	char motdecripte[500];
	while (texte[nb_car] != '\0')
	{
		nb_car++;
	}
	while (i<nb_car)
	{
		if ((texte[i]!='a' && texte[i]!='o' && texte[i]!='i' && texte[i]!='e' && texte[i]!='y' && texte[i]!=' ') && (texte[i+1]=='I' && texte[i+2]=='T') &&    (texte[i+3]=='a' || texte[i+3]=='o' || texte[i+3]=='i' || texte[i+3]=='e' || texte[i+3]=='y'))
		{
			motdecripte[j]=texte[i];
			motdecripte[j+1]=texte[i+3];
			i=i+4;
			j=j+2;
		}
		else
		{
			motdecripte[j]=texte[i];
			j++;
			i++;
		}
	}
	motdecripte[j]='\0';
	printf("%s\n",motdecripte);
}
