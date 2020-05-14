//
//  main.c
//  alfaNumeros2
//
//  Created by João Dematé Jr 🤠 on 14/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //DECLARAÇÃO DE UMA STRING EM C
    char nome[50];
    printf("Qual o seu nome? \n");
    gets(nome);
    printf("Seu nome é %s \n", nome);
  
    return 0;
}
