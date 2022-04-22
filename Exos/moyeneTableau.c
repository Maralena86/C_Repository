#include <stdlib.h>
#include <stdio.h>
double moyenneTableau(int tableau[], int tailleTableau);

int main(int argc, const char * argv[])
{
/*Déclaration de tableau*/
    
    int tableau[3]={10,6,12};
    moyenneTableau(tableau,3);
    printf("%f\n",moyenneTableau);
        return 0;
    

}

double moyenneTableau(int tableau[], int tailleTableau)
{
    int i;
    double resultat = 0;
    int somme = 0;
    
    for (i=0;i<tailleTableau ; i++)
    {
        somme+=tableau[i];
       resultat=somme/3;
    }
    printf("%d\n", somme);
    printf("%f\n",resultat);
    return resultat;
}

