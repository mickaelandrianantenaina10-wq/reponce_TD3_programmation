/*
VARIABLES
n entier
s entier
T[100] tableau entier
m reel
i entier
j entier
x entier
a entier
b entier
c enttier
e entier
DEBUT
AFFICHER "Entrer le dimension  du tableau T"
LIRE n
s⟵0
POUR (i=0;i<n;i++)
	AFFICHER"entrer le valeur du tableau"
	LIRE T[i]
	s⟵s+T[i]
FIN POUR 
m⟵s/n
POUR (i⟵0;i<n-1;i++) FAIRE
	POUR (j⟵i+1,j<n;j++) FAIRE
		SI (T[i]>T[j]) ALORS
			x⟵T[i]
			T[i]⟵T[j]
			T[j]⟵x
		FIN SI
	FIN POUR
FIN POUR
i⟵0
POUR(i⟵0;i<n ET T[i]<=m ;i++)
a⟵T[i]
d⟵T[i+1]
FIN POUR
b⟵d-m
c⟵m-a


SI (e==m) ALORS
	AFFICHER "L'element le plus proche de la mpoyenne est "e
SINON SI (b>c) ALORS
 	AFFICHER "l'element le plus proche du tableau est " a
SINON SI (b<c) ALORS
	AFFICHER"l'element le plus proche du tableau est "d
FIN SI 
*/
#include<stdio.h>
int main()
{
	int n,s,T[100],i,j,x,a,d;
	float m,b,c;
	printf("Entrer la dimension du tableau T :");
	scanf("%d",&n);
	s=0;
	for(i=0;i<n;i++)
		{
			printf("Entrer une nombre ∈ N dans la case n࠾%d du tableau T:",i+1);
			scanf("%d",&T[i]);
			s=s+T[i];
		}
	m=s/n;
	//printf("%f",m);
	for(i=0;i<(n-1);i++)
		{
			for(j=i+1;j<n;j++)
				{
					if (T[i]>T[j])
						{
							x=T[i];
							T[i]=T[j];
							T[j]=x;
						}
				}
		}		
	/*for(i=0;i<n;i++)
		{
			printf("%d \n",T[i]);
		}*/
	for (i=0;i<n && T[i]<=m ;i++)
		{
			a=T[i];
			d=T[i+1];
			
		}
	b=d-m;
	c=m-a;	
		//printf("%d  & %d",a,d);
	if (b>c)
		{
			printf ("Le valeur du tableau le plus proche de la moyenne est:%d",a);
		}
	else if (b<c)
		{
			printf ("Le valeur du tableau le plus proche de la moyenne est:%d",d);
		}
	else if (b==c)
		{
			printf ("Le valeur du tableau le plus proche de la moyenne est:%d et %d",a,d);
		}
	return (0);	
}
