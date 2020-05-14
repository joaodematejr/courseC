//
//  main.c
//  tiposNumeros
//
//  Created by João Dematé Jr 🤠 on 13/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    float media, nota1, nota2;
    //int numero_inteiro;
    //float media;
    //double outra_media;
    
    printf("Qual a primeira nota? ");
    scanf("%f", &nota1);
    
    printf("Qual a segunda nota? ");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2) / 2;
    
    printf("Media é %.2f \n", media);
    
    
    return 0;
}
