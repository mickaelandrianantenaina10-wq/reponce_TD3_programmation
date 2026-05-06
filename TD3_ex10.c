#include<stdio.h>
int main()
{
	char lettre[500],conservateur[500];
	int i,compteur=0;
	int a;
	printf("Entrer une lettre :");
	scanf("%[^\n]",lettre);
	while (lettre[compteur] != '\0')
	{
		 	compteur++;
	}
	/*for (i=0;i<compteur;i++)
	{
		conservateur[i]=lettre[i];
	}*/
	a=0;
	for (i=0;i<compteur;i++)
	{
		
		if (lettre [i]=='a' || lettre[i] =='e'||lettre[i]=='i' || lettre[i]=='o'||lettre[i]=='u' || lettre[i] =='y')
		{
			conservateur[a]=lettre[i];
			conservateur[a+1]='I';
			conservateur[a+2]='T';
			a=a+3;
		}
		else
		{
			conservateur[a]=lettre[i];
			a++;
		}
	}
	conservateur[a]='\0';
	printf("%s\n",conservateur);
	return 0;
}

