/*
VARIABLES
N:entier
X:reel
T[50]:tableau reel
U[50]:tableau reel
i :entier
j:entier
l:entier
DEBUT
AFFICHER "Entrer la taille du tableau N (0<N<51)"
LIRE (N)
	SI (N<1) ALORS
		AFFICHER"Erreur:le dimension doit être entre 0 et 50"
	SINON SI (N>50) ALORS
		AFFICHER"Erreur:le dimension doit être entre 0 et 50"
	SINON	
		POUR (i<--0;i<N;i++) FAIRE
			AFFICHER"Enrer une valeur dans le case nº"i+1"du tableau T :"
			LIRE (T[i])
		FIN POUR
		AFFICHER "Les valeur dans chaque case du tableau sont:"
		POUR (i<--0;i<N;i++) FAIRE
			AFFICHER T[i]
		FIN POUR	
		AFFICHER "Entrer une valeur à supprimer dans le tableau:"
		LIRE (X)
		j←0
		POUR (i←0;i<N;i++) FAIRE
			SI (T[i]!=X) ALORS
				U[j]←T[i]
				j←j+1
			FIN SI
		FIN POUR
		i←0
		POUR (l←0;l<j;l++) FAIRE
			T[i]←U[l]
			i←i+1
		FIN POUR
		AFFICHER "Le nouveau composant de T sont:"
		POUR(i←0;i<j;i++)FAIRE
			AFFICHERT[i]
			FIN POUR
	FIN SI	
FIN
*/
#include<stdio.h>
int main()
{
	int N,i,j,l;
	double X,T[50],U[50];
	printf("Entrer la taille du tableau N (0<N<51):");
	scanf("%d",&N);
	if(N<1)
		{
			printf("Erreur:le dimension doit être entre 0 et 50\n");
		}
	else if(N>50)
		{
			printf("Erreur:le dimension doit être entre 0 et 50\n");
		}
	else
		{
			for(i=0;i<N;i++)
				{
					printf("Enrer une valeur dans le case nº%d du tableau T :",i+1);
					scanf("%lf",&T[i]);
				}
			printf("Les valeur dans chaque case du tableau sont:\n");	
			for(i=0;i<N;i++)
				{
					printf("case nº%d : %lf \n",i+1,T[i]);
				}
			printf("Entrer une valeur à supprimer dans le tableau:");
			scanf("%lf",&X);
			j=0;
			for(i=0;i<N;i++)
				{
					if(T[i]!=X)
						{
							U[j]=T[i];
							j=j+1;
						}
				}
			i=0;
			for(l=0;l<j;l++)
				{
					T[i]=U[l];
					i++;
				}
			printf("Le nouveau composant de T sont:\n");
			for(i=0;i<j;i++)
				{
					printf("le valeur dans le case nº%d est:%lf \n",i+1,T[i]);
				}
		}
	return (0);	
}
