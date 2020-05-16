//
//  main.c
//  vetoresParte2
//
//  Created by João Dematé Jr 🤠 on 15/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int numeros[5];
    
    numeros[0] = 1;
    numeros[1] = 3;
    numeros[2] = 5;
    numeros[3] = 7;
    numeros[4] = 9;
    
    float velores[5];
    
    for (int i = 0; i < 5; i++) {
        velores[i] = (float)numeros[i] / (float)2;
    }
    
    for (int i = 4; i >= 0; i--) {
        printf("%.2f\n", velores[i]);
    }

    return 0;
}
