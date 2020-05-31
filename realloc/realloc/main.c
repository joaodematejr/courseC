//
//  main.c
//  realloc
//
//  Created by João Dematé Jr 🤠 on 30/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int qtd, *p;
    
    printf("Informe a quantidade de elementos para o vetor: ");
    scanf("%d", &qtd);

    
    p = (int*)malloc(qtd * sizeof(int)); // 3 x 4  == 12 BYTES
    
    if (p) {
        printf("A variável 'P' ocupa %ld bytes em memória. \n", qtd * sizeof(int));
        
        printf("Informe a quantidade de elementos para o vetor: ");
        scanf("%d", &qtd);
        
        p = (int*) realloc(p, qtd * sizeof(int));
        if (p) {
            printf("A variável 'P' ocupa %ld bytes em memória. \n", qtd * sizeof(int));
        }else{
            printf("Erro: Memória insuficiente !!! \n");
        }
    }else{
        printf("Erro: Memória insuficiente !!! \n");
    }

    //LIMPAR MEMORIA (DESALOCAR)
    free(p);
    p = NULL; //MEDIDA DE SEGURANÇA
    return 0;
}

