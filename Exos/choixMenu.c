#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int choixdeMenu = 0;
    
 printf("=== Menu ===\n");
    printf("1. Royal Cheese\n");
    printf("2. Mc Deluxe\n");
    printf("3. Mc Bacon\n");
    printf("4. Big Mac…\n");
    printf("Choix de menu: ");
    
    scanf("%d", &choixdeMenu);
    
    
    
    switch (choixdeMenu)
    {
    case 1:
      printf("tu as choisi la royal cheese!");
      break;
    case 2:
      printf("tu as choisi la Mc Deluxe !");
      break;
    case 3:
      printf("tu as choisi la Mc Bacon !");
      break;
    case 4:
      printf("tu as choisi la Big Mac!");
      break;
    
    default:
      printf("Dommage! pas de choix :(  ");
      break;
    }

}
