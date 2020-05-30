//
//  main.c
//  ctype
//
//  Created by João Dematé Jr 🤠 on 29/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

/*
 
//TESTE DE TIPOS DE CARACTERES

isalnum(); //VERIFICA SE CARACTERE É ALFANUMÉRICO(ABC749...)
isalpha(); //VERIFICA SE O CARACTERE É ALFABÉTICO(ABC...)
isdigit(); //VERIFICA SE O CARACTERE É UM DÍGITO DECIMAL(0123...)
ispunct(); //VERIFICA SE O CARACTERE É UMA PONTUAÇÃO (?!@#...)
isspace(); //VERIFICA SE É UM ESPAÇO ()
isupper(); //VERIFICA SE É MAIÚSCULO
tolower(); //CONVERTE PARA MINÚSCULO
toupper(); //CONVERTER PARA MAIÚSCULO
 
*/

int main(int argc, const char * argv[]) {
    // insert code here...
    char teste = 'H';
    
    if (isalnum(teste)) { //IS => É
        printf("É alfanumérico \n");
    }else{
        printf("Não é alfanumérico \n");
    }
    
    if (isalpha(teste)) {
        printf("É alfabético \n");
    }else{
        printf("Não é alfabético \n");
    }
    
    if (isdigit(teste)) {
        printf("É dígito \n");
    }else{
        printf("Não é dígito \n");
    }
    
    if (islower(teste)) {
        printf("É minúsculo \n");
    }else{
        printf("Não é minúsculo \n");
    }
    
    if (ispunct(teste)) {
        printf("É pontuação \n");
    }else{
        printf("Não é pontuação \n");
    }
    
    if (isspace(teste)) {
        printf("É espaço \n");
    }else{
        printf("Não é espaço \n");
    }
    
    if (isupper(teste)) {
        printf("É maiúsculo \n");
    }else{
        printf("Não é maiúsculo \n");
    }
    
    printf("A letra %c em maiúsculo  é %c\n", teste, toupper(teste));
    printf("A letra %c em minúsculo é %c\n", teste, tolower(teste));
    return 0;
}
