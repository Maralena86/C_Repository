//
//  main.c
//  como te llamas
//
//  Created by Maria on 29/03/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    // insert code here..
    float prixAchat = 0;
    int ArgentDonnée = 0;
   
    int MonnaieRendre;
    
    printf("Quelle est le montant à payer: ");
    scanf ("%f", &prixAchat);
    printf ("Le Montant donné pour payer est: ");
    scanf("%d", &ArgentDonnée);
    
    
    if (prixAchat == ArgentDonnée)
    
    {
        printf("C'est juste qu'est qu'il fallait!\n");
    }
 else if (ArgentDonnée > prixAchat)
 {
     MonnaieRendre= ArgentDonnée -prixAchat;
     printf("La monnaie à rendre est: %d\n",MonnaieRendre);
}
    else
        
    {
        printf("Ça ne suffit pas!\n");
    }
    return 0;
}

