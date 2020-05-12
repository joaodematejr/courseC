//
//  main.c
//  Aula Sobre Variáveis
//
//  Created by João Dematé Jr 🤠 on 11/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //DECLARANDO UMA VARIAVEL
    int idade;
    //DECLARANDO E INICIALIZANDO UMA VARIAVEL
    //int idade = 0;
    
    printf("Qual a sua idade ? ");
    scanf("%d", &idade);
    
    printf("A sua idade é %d anos \n", idade);
    
    return 0;
}
