//
//  main.c
//  arrayMultidimensionais
//
//  Created by João Dematé Jr 🤠 on 31/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

/*
 
  MATRIZ BI-DIMENSSIONAL

 [00][01][02]
 [10][11][12]
 [20][21][22]
 
 INT => 4 BYTES => 1 X 4 = 4 BYTES
                   2 X 4 = 8 BYTES
                   3 X 3 X 4 = 36 BYTES
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int *p, linhas = 3, colunas = 3 ;
    
    p = (int*) malloc(linhas * colunas * sizeof(int));
    
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            p[i * colunas + j] = 3 * i + j;
        }
    }
    
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d \n", p[i *  colunas + j]);
        }
    }
    
    
    free(p);
    p = NULL;
    return 0;
}
