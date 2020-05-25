//
//  main.c
//  escritaEmArquivos
//
//  Created by João Dematé Jr 🤠 on 24/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>
/*

int main(int argc, const char * argv[]) {
    FILE *arq;
    char frutas[10];
    
    arq = fopen("frutas.txt", "w");
        
    if (arq) {
        printf("Informe uma fruta, ou 0 para sair: \n");
        fgets(frutas, 10, stdin);// STDIN = STANDARD INPUT => ENTRADA PADRÃO
        while (frutas[0] != '0') {
            fputs(frutas, arq);
            printf("Informe uma fruta, ou 0 para sair: \n");
            fgets(frutas, 10, stdin);
        }
    } else {
        printf("Não foi possivel criar o arquivo.");
    }
    return 0;
}
 
 */

int main(int argc, const char * argv[]) {
    FILE *arq;
    char frutas[10];
    
    arq = fopen("frutas.txt", "a");
        
    if (arq) {
        printf("Informe uma fruta, ou 0 para sair: \n");
        fgets(frutas, 10, stdin);// STDIN = STANDARD INPUT => ENTRADA PADRÃO
        while (frutas[0] != '0') {
            fputs(frutas, arq);
            printf("Informe uma fruta, ou 0 para sair: \n");
            fgets(frutas, 10, stdin);
        }
    } else {
        printf("Não foi possivel criar o arquivo.");
    }
    return 0;
}
