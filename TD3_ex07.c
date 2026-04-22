/*
VARIABLES
texte[100] chaine de charactere
i:entier
nombre_charachter:entier
comteur_a:entier
compteur_es:entier
DEBUT
AFFICHER "Entrer un texte qui se termine par une point '.' pour trouver les nombre de 'a' et 'es'"
LIRE (texte)
i⟵0
TANT QUE (texte!='\0') FAIRE
    i++
FIN TANT QUE
nombre_character⟵i-1
SI (texte[i-1]!='.') ALORS
    AFFICHER "Le texte dois se terminer par une poin '.'"
SINON SI (texte=='.') ALORS
    POUR (i⟵0,i<=nombre_character,i++) FAIRE
        SI (texte[i]=='a')ALORS
            compteur_a⟵comteur_a+1 
        FIN SI
    FIN POUR
    POUR (i⟵0;i<=nombre_character,i⟵i+2) ALORS
        SI (texte[i]=='e' ET texte[i+1]=='s') ALORS
            comteur_es⟵compteur_es+1
        FIN SI
    FIN POUR
    AFFICHER "Le nombre de a est",comteur_a
    AFFICHER "Le nombre de es est",compteur_es
FIN SI
FIN                     
*/
#include<stdio.h>
int main(){
    char texte[100];
    int i,nombre_character,compteur_a=0,compteur_es=0;
    printf("Entrer un texte qui se termine par une point '.' pour trouver les nombre de 'a' et 'es':");
    scanf("%[^\n]",texte);
    i=0;
    while (texte[i]!='\0'){
        i++;
    }
   nombre_character=i-1;
   //printf("%d",nombre_character);
   if (texte[nombre_character]!='.'){
        printf("Le texte dois se terminer par une point");
   }
   else if (texte[nombre_character]=='.'){
        for ( i = 0; i <= nombre_character; i++)
        {
            if (texte[i]=='a')
            {
                compteur_a++;
            }
        }
        i=0;
        while (i<=nombre_character)
        {
            if (texte[i]=='e' && texte[i+1]=='s')
            {
                compteur_es++;
            }
            i++;
        }
        printf("Le nombre de a est:%d\n",compteur_a);
        printf("Le nombre de 'es' est:%d\n",compteur_es);
   }
 return 0;
 }

