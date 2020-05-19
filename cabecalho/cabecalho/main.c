//
//  main.c
//  cabecalho
//
//  Created by João Dematé Jr 🤠 on 19/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>
#include "ajuda.h"

int main(int argc, const char * argv[]) {
    int n1, n2, ret_s, ret_m;
    
    mensagem();
    
    printf("Informe o primeiro número: ");
    scanf("%d", &n1);
    
    printf("Informe o segundo número: ");
    scanf("%d", &n2);
    
    ret_s = soma(n1, n2);
    printf("A Soma de %d com %d é %d\n", n1, n2, ret_s);
    
    ret_m = multiplicacao(n1, n2);
    printf("A multiplicação de %d com %d é %d\n", n1, n2, ret_m);
    
    return 0;
}
