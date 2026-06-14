#include<stdio.h>
void affichage_int_tab2d(int nb_ligne,int nb_cologne,int tab2d[][nb_cologne])
{
	int i,j;
	for (i=0;i<nb_ligne;i++)
	{
		for(j=0;j<nb_cologne;j++)
		{
			printf("T[%d][%d]=%d\t",i,j,tab2d[i][j]);
		}
		printf("\n");
	}
}
