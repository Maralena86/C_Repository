//
//  main.c
//  pasé
//
//  Created by Maria on 08/04/2021.
//

#include <stdio.h>
#include<string.h>

int main(int argc, const char * argv[]) {
    
    int numero, cubo, opcion;
    
    printf("Podras hacer una accion con el numero que quieras, tienes dos opciones\n");
    printf("Opcion 1: Te daré el cubo del numero\n");
    printf("Opcion 2: Te diré si tu numero es par o impar\n");
    printf("Escribe tu numero: ");
    scanf ("%d", &numero);
    printf("Escribe la opcion: ");
    scanf("%d",&opcion );
    
    switch (opcion)
    {
        case 1:
            printf("Ok! elegiste el cubo!\n\n");
            cubo=numero*numero*numero;
            printf("El cubo de tu numero es: %d\n\n",cubo);
            break;
        case 2:
            printf ("Ok quieres saber si es impar o impar!\n\n");
          
            if (numero % 2 ==0)
            {
                printf("Tu numero es par\n\n");
            }
            else
            {
                printf("Tu numero es impar :)\n\n");;
            }
            break;
        
        default:
            printf("Te has equivocado\n\n");
            break;
            
            return 0;
           
    }
    
    
   
    
 
    return 0;
        
}
        
    
