//
//  main.c
//  heapSort
//
//  Created by João Dematé Jr 🤠 on 01/06/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

void cria_heap(int vetor[], int inicio, int fim){
    int pai = vetor[inicio];
    int filho = inicio * 2 + 1;
    
    //VERIFICAR SE PAI TEM 2 FILHOS. E QUEM É O MAIOR ?
    while (filho <= fim) {
        if (filho < fim) {
            if (vetor[filho] < vetor[filho + 1]) {
                filho = filho + 1;
            }
        }
        //FILHO É MAIOR QUE O PAI ?
        //FILHO SE TORNA PAI
        //REPETE O PROCESSO
        if (pai < vetor[filho]) {
            vetor[inicio] = vetor[filho];
            inicio = filho;
            filho = 2 * inicio + 1;
        }else{
            filho = fim + 1;
        }
    }
    //O ANTIGO PAI OCUPA O LUGAR DO ÚLTIMO FILHO ANALISADO
    vetor[inicio] = pai;
}

void heap_sort(int vetor[], int tam){
    int troca;
    int meio = (tam - 1) / 2;
    //CRIA A HEAP A PARTIR DOS DADOS
    for (int i = meio; i >= 0; i--) {
        cria_heap(vetor, i, tam);
    }
    for (int i = tam - 1; i >= 1; i --) {
        //PEGA O MAIOR ELEMENTO DA HEAP E COLOCA NA SUA POSIÇÃO CORRESPONDENTE NO VETOR
        troca = vetor[0];
        vetor[0] = vetor[i];
        vetor[i] = troca;
        cria_heap(vetor, 0, i - 1);
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int vetor[6] = {8, 3, 1, 42, 12, 5};
    int quantidade_elemento_vetor = 6;
    int tamanho_vetor = 6;
    
    //FUNÇÃO DE ORDENAÇÃO UTILIZANDO HEAP SORT
    //VETOR, INICIO, FIM
    heap_sort(vetor, tamanho_vetor);
    
    //APRESENTAR VETOR ORDENAÇÃO
    for (int i = 0; i < quantidade_elemento_vetor; i++) {
        printf("%d \n", vetor[i]);
    }
    return 0;
}
