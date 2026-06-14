#include<stdio.h>
void remplissage_int_tab2d(int nb_ligne,int nb_cologne,int tab2d[][nb_cologne])
{
	int i,j;
	for (i=0;i<nb_ligne;i++)
	{
		for(j=0;j<nb_cologne;j++)
		{
			printf("Entrer une valeur dans le ligne numero:%d et de cologne:%d du tableau:",i,j);
			scanf("%d",&tab2d[i][j]);
		}
	}
}
