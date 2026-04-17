/*
VARIABLE
T[101] :tableau entier
x:entier
i:entier
J:entier
n:entie
conservateur:entier
DEBUT
AFFICHER "Entrer la dimension de la tableau T entre 1 à 10:"
LIRE(n)
SI (n<1) ALORS
  AFFICHER"Erreur la dimension du tableau doit etre entre 1 à 100"
SINON SI (n>100) ALORS
   AFFICHER"Erreur la dimension du tableau doit etre entre 1 à 100"
SINON
  POUR (i<--0;i<n;i++) FAIRE
    AFFICHER"Entrer un nombre entier naturel dans la case n°"i+1"du tableau T"
    LIRE(T[i])
  FIN POUR
  POUR (i<--0;i<n-1;i++) FAIRE
    POUR (j<--(i+1);j<n;j++) FAIRE
      SI (T[i]>T[j])ALORS
        conservateur<--T[i]
        T[i]<--T[j]
        T[j]<--conservateur
      FIN SI
    FIN POUR
  FIN POUR  
  AFFICHER"Les composant du tableau T triée est :"
  POUR(i<--0;i<n;i++)ALORS
    AFFICHER"T[i]"
  FIN POUR
  AFFICHER"Quelle valeur vous vouler vous entrer dans le tableau"
  LIRE(x)
  T[n]<--x
  POUR (i<--0;i<n-2;i++) FAIRE
    POUR (j<--(i+1);j<n-1;j++) FAIRE
      SI (T[i]>T[j])ALORS
        conservateur<--T[i]
        T[i]<--T[j]
        T[j]<--conservateur
      FIN SI
    FIN POUR
  FIN POUR 
    AFFICHER"Les composant du tableau T avec l'element insere  (trié) :"
  POUR(i<--0;i<n;i++)ALORS
    AFFICHER"T[i]"
  FIN POUR
FIN SI  
FIN   
*/
#include<stdio.h>
int main()
  {
    int T[101],x,i,j,n,conservateur;
    printf("Entrer la dimension de la tableau T entre 1 à 100:");
    scanf("%d",&n);
    if(n<1)
      {
        printf("Erreur la dimension du tableau doit etre entre 1 à 100\n");
      }
    else if(n>100)
      {
        printf("Erreur la dimension du tableau doit etre entre 1 à 100\n");
      }
    else
      {
        for(i=0;i<n;i++)
          {
            printf("Entrer un nombre entier naturel dans la case n°%d du tableau T:",i+1);
            scanf("%d",&T[i]);
          }
         for (i=0;i<n-1;i++)
          {
            for (j=(i+1);j<n;j++)
              {
                if (T[i]>T[j])
                  {
                    conservateur=T[i];
                    T[i]=T[j];
                    T[j]=conservateur;
                  }
              }
          }   
         printf("Les composant du tableau T triée est :\n");
         for (i=0;i<n;i=i+1)
          {
            printf("%d \n",T[i]);
          }
         printf("Quelle valeur vous vouler vous entrer dans le tableau:");
         scanf("%d",&x);
         T[n]=x;
         for (i=0;i<n;i++)
          {
            for (j=(i+1);j<=n;j++)
              {
                if (T[i]>T[j])
                  {
                    conservateur=T[i];
                    T[i]=T[j];
                    T[j]=conservateur;
                  }
              }
          }   
         printf("Les composant du tableau T avec l'element insere  (trié) sont :\n");
         for (i=0;i<=n;i++)
          {
            printf("%d \n",T[i]);
          }
      }
  }
