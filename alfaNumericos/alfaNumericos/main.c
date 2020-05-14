//
//  main.c
//  alfaNumericos
//
//  Created by João Dematé Jr 🤠 on 14/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char opcao;
    
    printf("Informe uma opção: \n");
    printf("a - Saldo da conta; \n");
    printf("b - Extrado da conta \n");
    printf("c - Limite da conta \n");
    scanf("%c", &opcao);
    
    if (opcao == 'a') {
        printf("Seu Saldo é .... \n");
    } else if (opcao == 'b'){
        printf("Extrado da conta .... \n");
    } else if (opcao == 'c'){
        printf("Seu Limite é .... \n");
    } else{
        printf("Opção Desconhecida \n");
    }
    
    for (int i = 97; i <= 122; i++) {
        printf("%c\n", i);
    }
    return 0;
}
