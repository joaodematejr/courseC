//
//  main.c
//  doWhile
//
//  Created by João Dematé Jr 🤠 on 13/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int numero, soma = 0;
    do {
        printf("Informe um numero: ");
        scanf("%d", &numero);
        soma = soma + numero;
    } while (numero != 0);
        printf("A Soma é %d \n", soma);
    
    return 0;
}
