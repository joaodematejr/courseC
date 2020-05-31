//
//  main.c
//  malloc
//
//  Created by João Dematé Jr 🤠 on 30/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    // insert code here...
    int qtd, *p;

    printf("Informe a quantidade de elementos para o vetor: ");
    scanf("%d", &qtd);

    p = (int *)malloc(qtd * sizeof(int)); // 3 x 4  == 12 BYTES

    if (p)
    {
        for (int i = 0; i < qtd; i++)
        {
            printf("Informe o valor para a posição %d do vetor: ", i);
            scanf("%d", &p[i]);
        }

        for (int i = 0; i < qtd; i++)
        {
            printf("No vetor 'numeros[%d]' está o valor: %d \n", i, p[i]);
        }

        qtd = qtd * sizeof(int);

        printf("A variável 'P' ocupa %d bytes em memória. \n", qtd);
    }
    else
    {
        printf("Erro: Memória insuficiente !!! \n");
    }

    //LIMPAR MEMORIA (DESALOCAR)
    free(p);
    p = NULL; //MEDIDA DE SEGURANÇA
    return 0;
}