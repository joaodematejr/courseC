//
//  main.c
//  bubbleSort
//
//  Created by João Dematé Jr 🤠 on 01/06/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

void bubble_sort(int vetor[], int tam){
    //VARIAVEL AUXILIAR
    int proximo = 0;
    //VARRER TODO O VETOR EXTERNO
    for (int i = 0; i < tam; i++) {
        //TRABALHAR COM OS PRÓXIMOS ELEMENTOS
        for (int j = 0; j < (tam - 1); j++) {
            //OCORRE A TROCA
            if (vetor[j] > vetor[j+1]) {
                proximo = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = proximo;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int vetor[6] = {8, 3, 1, 42, 12, 5};
    int quantidade_elemento_vetor = 6;
    
    //FUNÇÃO DE ORDENAÇÃO UTILIZANDO INSERT SORT
    bubble_sort(vetor, quantidade_elemento_vetor);
    
    //APRESENTAR VETOR ORDENAÇÃO
    for (int i = 0; i < quantidade_elemento_vetor; i++) {
        printf("%d \n", vetor[i]);
    }
    return 0;
    return 0;
}
