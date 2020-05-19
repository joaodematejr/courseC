//
//  main.c
//  binario
//
//  Created by João Dematé Jr 🤠 on 19/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int valor = 2;
    
    printf("Valor vale %d\n", valor);
    //DESLOCAMENTO DE BITS PARA ESQUERDA
    valor = valor << 2;
    printf("Valor vale %d\n", valor);
    
    valor = 2;
    //DESLOCAMENTO DE BITS PARA DIREITA
    valor = valor >> 1;
    printf("Valor vale %d\n", valor);
    
    valor = 2;
    valor = ~valor;
    
    printf("Valor vale %d\n", valor);
    
    return 0;
}
