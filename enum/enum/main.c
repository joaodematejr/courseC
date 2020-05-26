//
//  main.c
//  enum
//
//  Created by João Dematé Jr 🤠 on 25/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

enum dias_da_semana{
    segunda,
    terca,
    quarta,
    quinta,
    sexta,
    sabado,
    domingo
};



int main(int argc, const char * argv[]) {
    // insert code here...
    enum dias_da_semana d1, d2;
    
    int numeros[5];
    numeros[0] = 1;
    numeros[1] = 3;
    numeros[2] = 5;
    numeros[3] = 7;
    numeros[4] = 9;
    
    d1 = segunda;
    d2 = 0;
    
    if (d1 == d2) {
        printf("Os dias são iguais... \n");
    }else{
        printf("Os dias não são iguais \n");
    }
    
    printf("Números 0 = %d \n", numeros[0]);
    printf("Números 4 = %d \n", numeros[4]);
    printf("Números 14 = %d \n", numeros[14]);
    
    
    
    return 0;
}
