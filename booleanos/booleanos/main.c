//
//  main.c
//  booleanos
//
//  Created by João Dematé Jr 🤠 on 14/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //NÃO EXISTE BOOLEAN ENTÃO 0 É FALSO E 1 É TRUE
    int booleano = 1;
    
    if (booleano) {
        printf("Verdadeiro \n");
    } else {
        printf("Falso \n");
    }
    
    return 0;
}
