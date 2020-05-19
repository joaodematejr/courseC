//
//  main.c
//  funcoes
//
//  Created by João Dematé Jr 🤠 on 19/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

// ESTRUTURA DAS FUNÇÕES

/*
 - TIPOS DE RETORNO
 - NOME
 - PARÂMETROS DE ENTRADA (OPCIONAL)
 - RETORNO (OPCIONAL)
*/

void mensagem(){
    printf("Bem Vindo! \n");
}

int soma(int num1, int num2){
    int res = num1 + num2;
    return res;
}
// 'a'
// '97'
void proximo_char(char caractere){
    printf("%c \n", caractere + 1);
}

int main() {
    //FUNCAO 1
    mensagem();
    //FUNCAO 2
    int retorno = soma(0, 1111112);
    printf("Retorno = %d \n",retorno);
    //FUNÇÃO 3
    char cara = 97;
    proximo_char(cara);
    return 0;
}
