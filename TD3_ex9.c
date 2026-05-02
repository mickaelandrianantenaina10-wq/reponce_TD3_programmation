#include<stdio.h>
void afficher(char mot[]);
void prendre(char mot[]);
void carre_mot(char mot[]);
int main ()
{
	char W[50];
	afficher("Entrer un mot pour verifier s'il est carre :");
	prendre(W);
	//printf("%s",W);
	carre_mot(W);
	return 0;
}
void afficher(char mot[])
{
	printf("%s",mot);
}
void prendre(char mot[])
{
	scanf("%s",mot);
}
void carre_mot(char mot[])
{
	int i=0;
	int nbr_car=0; //nombre caracter du mot 
	int compteur=0;
	while(mot[i] != '\0')
	{
		nbr_car++;
		i++;
	}
	if(nbr_car<=2)
	{
		printf("Le mot n'est pas carre \n");
	}
	else
	{
		if (nbr_car%2!=0)
			{
				printf("Le mot n'est pas carre\n");
			}
		else 
			{
				for (i=0;i<=((nbr_car-1)/2);i++)
				{
					if (mot[i]!=mot[(((nbr_car+1)/2)+i)])
					{
						compteur++;
					}
				}	
			}
		if (compteur==0)
		{
			printf("Le mot est carre\n");
		}
		else if (compteur>0)
		{
			printf("Le mot n'est pas carre\n");
		}
	}
}
