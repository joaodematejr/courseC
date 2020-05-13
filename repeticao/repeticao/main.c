//
//  main.c
//  ESTRUTURA DE REPETIÇÃO, FOR, WHILE, DO..WHILE
//
//  Created by João Dematé Jr 🤠 on 13/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int numero, soma = 0;
    
    for (int i = 0; i < 5; i++) {
        printf("Informe um numero: ");
        scanf("%d", &numero);
        soma = soma + numero;
    }
    
    printf("A soma é %d \n", soma);
    
    return 0;
}
