//
//  main.c
//  ponteiro3
//
//  Created by João Dematé Jr 🤠 on 22/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int valores[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        printf("O valor %d tem %ld bytes \n", valores[i], sizeof(valores[i]));
    }
    printf("O Array valores possui %ld bytes \n", sizeof(valores));
    
    printf("valores[0] valor %d e endereço de memória é %p\n", valores[0], valores[0]);
    printf("*(valores) vale %d e endereço de memória é %p\n", *(valores), *(valores));
    printf("*(valores+1) vale %d e endereço de memória é %p\n", *(valores+1), *(valores+1));
    printf("*(valores+2) vale %d e endereço de memória é %p\n", *(valores+2), *(valores+2));
    printf("*(valores+3) vale %d e endereço de memória é %p\n", *(valores+3), *(valores+3));
    printf("*(valores+4) vale %d e endereço de memória é %p\n", *(valores+4), *(valores+4));
    return 0;
}
