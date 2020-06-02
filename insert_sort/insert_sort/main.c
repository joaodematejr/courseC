//
//  main.c
//  insert_sort
//
//  Created by João Dematé Jr 🤠 on 01/06/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>
    
//FUNÇÃO INSERT SORT
void insert_sort(int vetor[], int tam){
    int troca;
    //PERCORRER TODO O VETOR
    for (int i = 1; i < tam; i++) {
        int proximo = i;
        //RESPONSAVEL PELAS TROCAS
        while ((proximo != 0) && (vetor[proximo] < vetor[proximo - 1])) {
            troca = vetor[proximo];
            vetor[proximo] = vetor[proximo - 1];
            vetor[proximo - 1] = troca;
            proximo --;
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int vetor[6] = {8, 3, 1, 42, 12, 5};
    int quantidade_elemento_vetor = 6;
    
    //FUNÇÃO DE ORDENAÇÃO UTILIZANDO INSERT SORT
    insert_sort(vetor, quantidade_elemento_vetor);
    
    //APRESENTAR VETOR ORDENAÇÃO
    for (int i = 0; i < quantidade_elemento_vetor; i++) {
        printf("%d \n", vetor[i]);
    }
    return 0;
}
