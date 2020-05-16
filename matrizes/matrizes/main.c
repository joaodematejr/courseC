//
//  main.c
//  matrizes parte 01
//
//  Created by João Dematé Jr 🤠 on 15/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

/*
 
ARRAY UNI-DIMENSIONAL (VETORES) INT NUMEROS[5];
 [0][1][2][3][4]
 
ARRAY MULTI-DIMENSIONAL(MATRIZES) INT NUMEROS[5][5][LINHAS][COLUNAS];
[00][01][02][03][04]
[10][11][12][13][14]
[20][21][22][23][24]
[30][31][32][33][34]
[40][41][42][43][44]
*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char nome[3][50];
    for (int i = 0; i < 3; i++) {
        printf("Qual o seu nome? \n");
        gets(nome[i]);
    }
    
    for (int i = 0; i < 3; i++) {
       printf("Olá %s\n", nome[i]);
    }
    
    return 0;
}
