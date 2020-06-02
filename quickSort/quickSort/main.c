//
//  main.c
//  quickSort
//
//  Created by João Dematé Jr 🤠 on 01/06/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

void quick_sort(int vetor[], int tamanho){
    int i, j, grupo, troca;
    
    //CRITÉRIO DE PARADA DA RECURSIVIDADE !
    if (tamanho < 2) {
        return; //SAIR DA FUNÇÃO
    }else{
        grupo = vetor[tamanho / 2];
    }
    
    //FAZENDO UM LOOP ÚNICO SE COMPORTAR COMO DOIS
    for (i = 0, j = tamanho -1;; i++, j--) {
        //FAZENDO A MOVIMENTAÇÃO DOS ELEMENTOS NO VETOR I
        while (vetor[i] < grupo) {
            i++;
        }
        //FAZENDO A MOVIMENTAÇÃO DOS ELEMENTOS NO VETOR J
        while (grupo < vetor[j]) {
            j--;
        }
        //CRITÉRIO DE PARADA DO LOOP
        if (i >= j) {
            break;
        }else{
            //ONDE VAI OCORRER AS TROCAS
            troca = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = troca;
        }
    }
    //USAR A RECURSIVIDADE PARA ORDENAR OS GRUPOS
    quick_sort(vetor, i);
    quick_sort(vetor + i, tamanho - i);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int vetor[6] = {8, 3, 1, 42, 12, 5};
    int quantidade_elemento_vetor = 6;
    
    //FUNÇÃO DE ORDENAÇÃO UTILIZANDO INSERT SORT
    quick_sort(vetor, quantidade_elemento_vetor);
    
    //APRESENTAR VETOR ORDENAÇÃO
    for (int i = 0; i < quantidade_elemento_vetor; i++) {
        printf("%d \n", vetor[i]);
    }
    return 0;
}
