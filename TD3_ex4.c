/*
VARIABLES
T1[50]:tableau entier
T2[100]:tableau entier
conservateur[50]
i:entier
dimension1:entier
dimension2:entier
a:entier
b:entier
q:entier
DEBUT
AFFICHER"Entrer la dimension1 du tableau T1 (0<dimension<51):"
LIRE dimension1
AFFICHER"Entrer la dimension2 du tableau T2 (0<dimension<101):"
LIRE dimension2
AFFICHER"ENNTRER DES NOMBRES ENTIER NATUREL DANS CHAQUE CASE DU TABLEAU T1"
POUR(i←0;i<dimension1;i++) FAIRE
	AFFICHER("case nº"i+1":")
	LIRE T1[i]
FIN POUR
AFFICHER"Les composant du tableau T1 sont:"
POUR(i←0;i<dimension1;i++) FAIRE
	AFFICHER T1[i]
FIN POUR
AFFICHER"ENNTRER DES NOMBRES ENTIER NATUREL DANS CHAQUE CASE DU TABLEAU T2"
POUR(i←0;i<dimension2;i++) FAIRE
	AFFICHER("case nº"i+1":")
	LIRE T2[i]
FIN POUR
AFFICHER"Les composant du tableau T2 sont:"
POUR(i←0;i<dimension2;i++) FAIRE
	AFFICHER T2[i]
FIN POUR
POUR (i←0;i<dimension2;i++) FAIRE
	a←0"
	b←0
	q←0
	POUR(j←0;j<dimension1-q;j++)FAIRE
		SI (T1[j]!=T2[i])	ALORS
			conservateur[a]←T1[j]
			T1[b]←conservateur[a]
			a←a+1
			b←b+1
		SINON
			q←q+1
		FIN SI
	FIN POUR
FIN POUR
AFFICHER "Le nouveau composant de T1 sont:"
POUR (i←0;i<dimension1-q;i++) FAIRE
	AFFICHER T1[i]
FIN POUR
FIN
*/
#include<stdio.h>
int main()
{
	int T1[50],T2[100],conservateur[50];
	int dimension1,dimension2,i,a,b,q,j;
	int zavatra;
	printf("Entrer la dimension1 du tableau T1 (0<dimension<51):");
	scanf("%d",&dimension1);
	printf("Entrer la dimension2 du tableau T2 (0<dimension<101):");
	scanf("%d",&dimension2);
	printf("ENNTRER DES NOMBRES ENTIER NATUREL DANS CHAQUE CASE DU TABLEAU T1\n");
	for(i=0;i<dimension1;i++)
		{
			printf("case nº%d :",i+1);
			scanf("%d",&T1[i]);
		}
	printf("\nLes composant du tableau T1 sont:\n");
	for(i=0;i<dimension1;i++)
		{
			printf("case nº%d:%d \n",i+1,T1[i]);
		}
	printf("ENNTRER DES NOMBRES ENTIER NATUREL DANS CHAQUE CASE DU TABLEAU T2\n");
	for(i=0;i<dimension2;i++)
		{
			printf("case nº%d :",i+1);
			scanf("%d",&T2[i]);
		}
	printf("\nLes composant du tableau T2 sont:\n");
	for(i=0;i<dimension2;i++)
		{
			printf("case nº%d:%d \n",i+1,T2[i]);
		}
	zavatra=dimension1;	
	q=0;	
	for(i=0;i<dimension2;i++)
		{
			a=0;
			b=0;
			
			for(j=0;j<zavatra;j++)
				{
					if(T1[j]!=T2[i])
						{
							//conservateur[a]=T1[j];
							//T1[b]=conservateur[a];
							T1[b]=T1[j];
							a=a+1;
							b=b+1;
						}
					else if (T1[j]==T2[i])
						{
							q=q+1;
						}		
				}
			zavatra=zavatra-q;
			q=0;	
		}
	//	printf("%d \n",zavatra);
	printf("Le nouveau composant de T1 sont:\n");
	for(i=0;i<zavatra;i++)
		{
			printf("case nº%d :%d \n",i+1,T1[i]);
		}
	return (0);	
}
