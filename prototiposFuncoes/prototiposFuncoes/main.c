//
//  main.c
//  prototiposFuncoes
//
//  Created by João Dematé Jr 🤠 on 19/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

/*
ASSINATURA DAS FUNÇÕES
- TIPOS DE RETORNO
- NOMES
- PARÂMETROS DE ENTRADA (OPCIONAIS)
*/

//PROTÓTIPO DE FUNÇÃO
int soma(int num1, int num2);

void mensagem();

int main(int argc, const char * argv[]) {
    // insert code here...
    int n1, n2;
    printf("Informe o primeiro número: ");
    scanf("%d", &n1);
    
    printf("Informe o segundo número: ");
    scanf("%d", &n2);
    
    int ret = soma(n1, n2);
    
    printf("A soma de %d com %d é %d \n", n1, n2, ret);
    
    mensagem();
    
    return 0;
}

int soma(int num1, int num2){
    return num1 + num2;
}

void mensagem(){
    printf("Bem-Vindo... \n");
}
