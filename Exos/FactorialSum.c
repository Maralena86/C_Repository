//
//  main.c
//  WHILEé
//
//  Created by Maria on 12/04/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int numero, factorial = 0,  suma=0, comp;
    
    printf("Escribe tu numero: ");
    scanf("%d", &numero);
    
    for (comp=1;comp<numero; comp++)
    {
        factorial *=comp;
        suma += factorial;
    }
   
    printf("La suma del factorial es igual a: %d\n", suma);
    
    
    
    return 0;
}
