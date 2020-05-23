//
//  main.c
//  ponteiros2
//
//  Created by João Dematé Jr 🤠 on 22/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n; //VARIAVEL QUE GUARDA SEU VALOR NA MEMÓRIA
    int* p; //PONTEIRO É UM VALOR QUE APONTA PARA UM ENDEREÇO DE MEMÓRIA
    
    printf("Informe um número: ");
    scanf("%d", &n);
    
    //INICIALIZANDO O PONTEIRO
    p = &n;
    
    printf("O número informado foi %d\n", n);
    printf("O endereço de memória %d\n", &n);
    printf("Endereço do ponteiro: %p\n", p);
    
    return 0;
}
