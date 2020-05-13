//
//  main.c
//  While
//
//  Created by João Dematé Jr 🤠 on 13/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int numero, soma = 0;
    
    printf("Informe um número: ");
    scanf("%d", &numero);
    
    while (numero != 0) {
        soma = soma + numero;
        printf("Informe um número: ");
        scanf("%d", &numero);
    }
    
    printf("A soma é %d \n", soma);
    
    return 0;
}
