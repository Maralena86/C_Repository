#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[])
{
    int numeroentrée=0, numeroMystere=0;
    int compteur = 0, rejouer=1, joueur;
    const int MAX = 100, MIN = 1;
    char  prenom [100];
    srand(time(NULL));
    numeroMystere = (rand() % (MAX - MIN + 1)) + MIN;
    printf("Comment tu t'appelles?\n");
    scanf("%s", &prenom);
    printf(" Bienvenue %s !!!\nTu es arrivé pour trouver le numero mystère\n\n\n",prenom);
    
    while(rejouer==1)
{
    printf("Tu veux jouer à 1 ou 2 jouers: ");
    scanf("%d", &joueur);
    {
        switch (joueur)
        {
            case 1:
                printf("choisi un numero entre 1 et 100: ");
                scanf("%d", &numeroentrée);
                break;
            case 2:
                printf("Le joueur 1 choisi le numero mystere: ");
                scanf("%d", &numeroMystere);
                printf("Le jouer 2 trouve le numero: ");
                scanf("%d", &numeroentrée);
                break;
            default:
                printf("Trompé!/n");
                break;
        }
    
   
    do
    {
        if (numeroentrée>numeroMystere)
        {
            printf("C'est moins!\n");
        }
        else if (numeroentrée<numeroMystere)
        {
            printf("C'est plus!\n");
        }
        else
            printf("Tu l'as trouvé\n");
        
        compteur++;
    }
    while(numeroentrée!=numeroMystere){
     printf ("Tu as trouvé le numero en %d fois\n\n\n", compteur);
        printf("Tu veux rejouer? Si oui=1 si non=0");
        scanf("%d", &rejouer);
     
 }
    return 0;
}
}
