/*
VARIABLES
	T[100] :Tableau entier
	N entier
	i :entier
	V[100]:tableau entier
	U[100] :tableau entier
	j:entier
	k:entier
	l:entier
DEBUT
	AFFICHER "Entrer la dimension du tableau T et qui ne depasse pas de 50"
	LIRE (N)
	POUR (i<--0;i<N;i=i+1)ALORS
		AFFICHER''Entrer une valeur pour le tableau"
		LIRE(T[i])
	FIN POUR
	j<--0
	k<--0
	POUR(i<--0;i<N;i++)ALORS
		SI(T[i]%2==0)ALORS
			V[j]<--T[i]
			j=j+1
		SINON SI (T[i]%2!=0)ALORS
			U[k]<--T[i]
			k<--k+1
		FIN SI
	FIN POUR
	l<--0
	POUR(i<--0;i<j;i++)ALORS
		T[i]<--V[l]
		l<--l+1
	FIN POUR
	l<--0
	POUR(i<--j;i<N;i++)ALORS
		v[i]<--U[l]
		l<--l+1
	FIN POUR
	AFFICHER"Le nouveau contenue du tableau T sont:"
	POUR(i<--0;i<N;i++)ALORS
		AFFICHER T[i]
	FIN POUR
FIN	
*/
#include<stdio.h>
	int main()
		{
			int T[100],N,i,V[100],U[100],j,k,l;
			printf("Entrer la dimension du tableau T et qui ne depasse pas de 50:");
			scanf("%d",&N);
			for (i=0;i<N;i=i+1)
				{
					printf("Entrer une valeur pour le tableau T :");
					scanf("%d",&T[i]);
				}
			j=0;
			k=0;
			for(i=0;i<N;i++)
				{
					if(T[i]%2==0)
						{
							V[j]=T[i];
							j=j+1;
						}
					else
						{
							U[k]=T[i];
							k=k+1;
						}
				}
			l=0;
			for(i=0;i<j;i++)
				{
					T[i]=V[l];
					l=l+1;
				}
			l=0;	
			for(i=j;i<N;i++)
				{
					T[i]=U[l];
					l=l+1;
				}
			printf("\n Le nouveau contenue du tableau T sont:\n");
			for(i=0;i<N;i++)
				{
					printf("%d \n",T[i]);
				}
			return 0;		
		}
