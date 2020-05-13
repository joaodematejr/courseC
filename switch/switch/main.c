//
//  main.c
//  switch
//
//  Created by João Dematé Jr 🤠 on 13/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char *argv[]){
    int valor;

    printf("Digite um valor de 1 a 7: ");
    scanf("%d", &valor);

    switch (valor){
    case 1:
        printf("Domingo \n");
        break;
    case 2:
        printf("Segunda \n");
        break;
    case 3:
        printf("Terça \n");
        break;
    case 4:
        printf("Quarta \n");
        break;
    case 5:
        printf("Quinta \n");
        break;
    case 6:
        printf("Sexta \n");
        break;
    case 7:
        printf("Sabado \n");
        break;
    default:
        printf("Valor Invalido \n");
        break;
    }
    return 0;
}
