//
//  main.c
//  ponteiros
//
//  Created by João Dematé Jr 🤠 on 20/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

void incrementa(int* valor){
    printf("Antes de incrementar. \n");
    printf("0 contador vale %d\n", (*valor));
    printf("0 endereço de memoria é %d\n", valor);
    printf("Depois de entrar na função \n");
    
    // VALOR ++
    // VALOR --
    // ++ VALOR
    // -- VALOR
    
    printf("O contador vale %d\n", ++(*valor));
    printf("0 endereço de memoria é %d\n", &valor);
}

int main(int argc, const char * argv[]) {
    int contador = 10;
    
    printf("Antes de entrar na função \n");
    printf("0 contador vale %d\n", contador);
    printf("0 endereço de memoria é %d\n", &contador);
    
    //COPIA POR VALOR
    incrementa(&contador);
    
    printf("Depois de entrar na função \n");
    printf("O contador vale %d \n", contador);
    printf("0 endereço de memoria é %d\n", &contador);
    return 0;
}
