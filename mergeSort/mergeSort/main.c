//
//  main.c
//  mergeSort
//
//  Created by João Dematé Jr 🤠 on 01/06/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

void merge(int vetor[], int inicio1, int fim1, int inicio2, int fim2){
    //VETOR TEMPORÁRIO PARA O MERGE
    int temp[50];
    //VARIAVEIS AUXIARES
    int i, j, k;
    //INICIO DO PRIMEIRO GRUPO
    i = inicio1;
    //INICIO DO SEGUNDO GRUPO
    j = inicio2;
    k = 0;
    //ENQUANTO TIVER ELEMENTOS EM AMBOS OS GRUPOS...
    while (i <= fim1 && j <= fim2) {
        //FAÇA A ORDENAÇÃO DE ACORDO COM CADA GRUPO
        if (vetor[i] < vetor[j]) {
            temp[k++] = vetor[i++];
        }else{
            temp[k++] = vetor[j++];
        }
    }
    
    //COPIAR OS ELEMENTOS RESTANTES DO PRIMEIRO GRUPO
    while (i <= fim1) {
        temp[k++] = vetor[i++];
    }
    
    //COPIAR OS ELEMENTOS RESTANTES DO SEGUNDO GRUPO
    while (j <= fim2) {
        temp[k++] = vetor[j++];
    }
    //TRANSFERE OS ELEMENTOS DO VETRO TEMPORÁRIO PARA O ORIGINAL
    for (i = inicio1, j = 0; i <= fim2; i++, j++) {
        vetor[i] = temp[j];
    }
    
}

void merge_sort(int vetor[], int inicio, int fim){
    //CONDIÇÃO DE PARADA DA RECURSÃO
    if (inicio < fim) {
        //CALCULAR O MEIO DO VETOR
        int meio = (inicio + fim) / 2;
        //RECURSÃO ESQUERDA
        merge_sort(vetor, inicio, meio);
        //RECURSÃO DIREITA
        merge_sort(vetor, meio + 1, fim);
        //FAZ O MERGE (JUNTA) COM OS DOIS GRUPOS DE VETORES ORDENADOS
        merge(vetor, inicio, meio, meio + 1, fim);
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int vetor[6] = {8, 3, 1, 42, 12, 5};
    int quantidade_elemento_vetor = 6;
    int posicao_inicial = 0;
    int posicao_final = 6 - 1;
    
    //FUNÇÃO DE ORDENAÇÃO UTILIZANDO MERGE SORT
    //VETOR, INICIO, FIM
    merge_sort(vetor, posicao_inicial, posicao_final);
    
    //APRESENTAR VETOR ORDENAÇÃO
    for (int i = 0; i < quantidade_elemento_vetor; i++) {
        printf("%d \n", vetor[i]);
    }
    return 0;
}
