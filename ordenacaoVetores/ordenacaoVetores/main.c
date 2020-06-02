//
//  main.c
//  ordenacaoVetores
//
//  Created by João Dematé Jr 🤠 on 01/06/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

/*
 
SELECT_SORT
 
*/

#include <stdio.h>

void select_sort(int vetor[], int tamanho){
    int menor, troca;
    
    //LOOP EXTERNO PARA REPASSAR TODO O VETOR
    for (int i = 0; i < (tamanho - 1); i++) {
        menor = i;
        //LOOP INTERNO PARA TRABALHAR COM O PRÓXIMO ELEMENTO
        for (int j = (i+1); j < tamanho; j++) {
            if (vetor[j] < vetor[menor]) {
                menor = j;
            }
        }
        //OCORRENDO A TROCA
        if (i != menor) {
            troca = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = troca;
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int vetor[6] = {8, 3, 1, 42, 12, 5};
    int quantidade_elemento_vetor = 6;
    
    //FUNÇÃO DE ORDENAÇÃO UTILIZANDO SELECT SORT
    select_sort(vetor, quantidade_elemento_vetor);
    
    //APRESENTAR VETOR ORDENAÇÃO
    for (int i = 0; i < quantidade_elemento_vetor; i++) {
        printf("%d \n", vetor[i]);
    }
    return 0;
}
