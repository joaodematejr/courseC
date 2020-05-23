//
//  main.c
//  arrayPonteiros
//
//  Created by João Dematé Jr 🤠 on 22/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int valores[5];
    
    for (int i = 0; i < 5; i++) {
        printf("Informe o %d/5 valor: ", (i+1));
        scanf("%d", &valores[i]);
    }
    printf("Os valores informados foram: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", valores[i]);
        
    }
    
    printf("%p %d\n", &valores[0], valores[0]);
    printf("%p %d\n", valores, valores[0]);

    return 0;
}
