#include<stdio.h>
void operation_carre_magique(int nb_ligne,int nb_cologne,int tab2d[nb_ligne][nb_cologne])
{
	int sommeligne[nb_ligne];
	int i,j;
	int ligne=0,cologne=0;
	for (i=0;i<nb_ligne;i++)
	{
		sommeligne[i]=0;
	}
	int sommecologne[nb_cologne];
	for (i=0;i<nb_cologne;i++)
	{
		sommecologne[i]=0;
	}
	for (i=0;i<nb_ligne;i++)
	{
		for (j=0;j<nb_cologne;j++)
		{
			sommeligne[ligne]=sommeligne[ligne]+tab2d[i][j];
		}
		ligne++;
	}
	for (j=0;j<nb_cologne;j++)
	{
		for (i=0;i<nb_ligne;i++)
		{
			sommecologne[cologne]=sommecologne[cologne]+tab2d[i][j];
		}
		cologne++;
	}
	int inegalite=0;
		for(j=1;j<nb_cologne;j++)
		{
			if(sommecologne[0]!=sommecologne[j])
			{
				inegalite++;
				break;
			}
		}
		for(j=1;j<nb_cologne;j++)
		{
			if(sommeligne[0]!=sommeligne[j])
			{
				inegalite++;
				break;
			}
		}
	for (i=0;i<nb_ligne;i++)
	{
		for(j=0;j<nb_cologne;j++)
		{
			if(sommecologne[i]!=sommeligne[j])
			{
				inegalite++;
				break;
			}
			if(inegalite!=0)
			{
				break;
			}
		}
	}
	if (inegalite==0)
	{
		printf("Le caree est magique\n");
		for (i=0;i<nb_ligne;i++)
		{
			for(j=0;j<nb_cologne;j++)
			{
				printf("%d\t",tab2d[i][j]);
			}
			printf("=%d\n",sommeligne[i]);
		}
		for(j=0;j<nb_cologne;j++)
		{
			printf("=\t");
		}
		printf("\n");
		for(j=0;j<nb_cologne;j++)
		{
			printf("%d\t",sommecologne[j]);
		}
		printf("\n");
	}
	else
	{
		printf("Le care n'est PAS magique\n");
		for (i=0;i<nb_ligne;i++)
		{
			for(j=0;j<nb_cologne;j++)
			{
				printf("%d\t",tab2d[i][j]);
			}
			printf("=%d\n",sommeligne[i]);
		}
		for(j=0;j<nb_cologne;j++)
		{
			printf("=\t");
		}
		printf("\n");
		for(j=0;j<nb_cologne;j++)
		{
			printf("%d\t",sommecologne[j]);
		}
		printf("\n");
	}
}
