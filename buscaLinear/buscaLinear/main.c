//
//  main.c
//  buscaLinear
//
//  Created by João Dematé Jr 🤠 on 01/06/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

int busca_linear(int vetor[], int chave, int tamanho){
    
    for (int i =0; i < tamanho; i++) {
        if (vetor[i] == chave) {
            return i;
        }
    }
    return -1;

};

int main(int argc, const char * argv[]) {
    // insert code here...
    //VETOR ORDENADO
    int vetor[6] = {1, 3, 5, 8, 12, 42};
    //ELEMENTO CHAVE QUE QUEREMOS ENCONTRAR NO VETOR
    int chave = 12;
    //APLICANDO  A BUSCA BINÁRIA
    int tamanho_vetor = 6;
    int ret = busca_linear(vetor, chave, tamanho_vetor);
    
    printf("O elemento %d está na posição %d \n", chave, ret);
    
    return 0;
}
