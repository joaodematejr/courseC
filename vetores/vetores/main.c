//
//  main.c
//  Vetores
//
//  Created by João Dematé Jr 🤠 on 15/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //VETORES
    char nome[50];
    printf("Qual o seu nome? \n");
    gets(nome);
    printf("Olá %s \n", nome);
    char letras[25];
    int contador = 0;
    for (int i = 97; i<=122; i++) {
        letras[contador] = i;
        contador = contador + 1;
    }
    for (int i = 0; i < 25; i++) {
        printf("%d == %c \n", letras[i], letras[i]);
    }
    int numeros[10];
    float velores[5];
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
