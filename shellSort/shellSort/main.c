//
//  main.c
//  shellSort
//
//  Created by João Dematé Jr 🤠 on 01/06/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

//SHELL SORT
void shell_sort(int vetor[], int tam){
    //VARIÁVEL AUXILIAR
    int grupo = 1;
    //GERAR O TAMANHO DO GRUPO DE ACORDO COM O TAMANHO DO VETOR;
    while (grupo < tam) {
        grupo = 3 * grupo + 1;
    }
    
    //VARRER O VETOR ENQUANTO HOUVER GRUPOS PARA ORDENAR
    while (grupo > 1) {
        //DIVIDIR O GRUPO EM 3 PARTES
        grupo /= 3;
        //VARREMOS CADA GRUPO
        for (int i = grupo; i < tam; i++) {
            int troca = vetor[i];
            int j = i - grupo;
            //REALIZA A TROCA
            while (j >= 0 && troca < vetor[j]) {
                vetor[j + grupo] = vetor[j];
                j -= grupo;
            }
            //REALIZA A TROCA
            vetor[j + grupo] = troca;
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int vetor[6] = {8, 3, 1, 42, 12, 5};
    int quantidade_elemento_vetor = 6;
    
    //FUNÇÃO DE ORDENAÇÃO UTILIZANDO SHELL SORT
    shell_sort(vetor, quantidade_elemento_vetor);
     
    //APRESENTAR VETOR ORDENAÇÃO
    for (int i = 0; i < quantidade_elemento_vetor; i++) {
        printf("%d \n", vetor[i]);
    }
    return 0;
}
