//
//  main.c
//  complilando
//
//  Created by João Dematé Jr 🤠 on 27/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

/*
 
 COMPILAR MANUALMENTE USANDO GCC NOME DO ARQUIVO EM C -O NOME DO NOVO ARQUIVO.EXE
 
 ./NOME DO ARQUIVO NOVO PARA COMPILAR
 
 
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int quantidade, soma = 0;
    
    printf("Quantos números você quer somar? ");
    scanf("%d", &quantidade);
    
    for (int i = 0; i < quantidade; i++) {
        soma = soma + i * 2 + 3;
    }
    
    printf("A soma é %d", soma);
    
    return 0;
}
