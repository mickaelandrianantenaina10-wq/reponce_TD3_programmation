/*
VARIABLES
mot[50] chaine de caractère
i entier
n entier
compteur1 entier
DEBUT
AFFICHER "Entrer un mot pour verifier s'il est palindrome"
LIRE (mot)
i⟵0
TANT QUE (mot[i]!='\0') FAIRE
	i++
FIN TANT QUE
compteur⟵0
POUR(n⟵0;n<=((i-1)/2)-1;n++) FAIRE
	SI (T[n]!=T[i-n]) ALORS
		compteur⟵compteur+1
	FIN SI
FIN POUR
SI (compteur==0) ALORS
	AFFICHER"ce nombre est palindrome"
SINON
	AFFICHER "ce mot n'est pas palindrome"
FIN SI
FIN
*/
#include<stdio.h>
int main()
{
	char mot[50];
	int i,n,compteur;
	printf("Entrer un mot pour verifier s'il est palindrome😁 :");
	scanf("%s",mot);
	i=0;
	while(mot[i]!='\0')
		{
			i++;
		}
	for(n=0;n<(i/2)-1;n++)
		{
			if(mot[n]!=mot[(i-1)-n])
				{
					compteur=compteur+1;
				}		
		}
	if(compteur==0)
		{
			printf("Ce mot est palindrome 😉\n");
		}
	else
		{
			printf("Ce mot n'est pas palindrome 😄");
		}
	return(0);
}

