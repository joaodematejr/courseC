//
//  main.c
//  escritaArquivos
//
//  Created by João Dematé Jr 🤠 on 23/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    FILE * arq;
    char fruta[10];
    arq = fopen("frutas.txt", "w"); //WRITE => ESCRITA
    
    if (arq) {
        printf("Informe uma fruta, ou 0 para sair: \n");
        fgets(fruta, 10, stdin); //STDIN = STANDARD INPUT => ENTRADA PADRÃO
        while (fruta[0] != '0') {
            fputs(fruta, arq);
            printf("Informe uma fruta, ou 0 para sair: \n");
            fgets(fruta, 10, stdin);
        }
    }else{
        printf("Não foi possivel criar o arquivo !!!");
    }
    fclose(arq);
    return 0;
}
