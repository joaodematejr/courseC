//
//  main.c
//  buscaBinaria
//
//  Created by João Dematé Jr 🤠 on 01/06/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

int busca_binaria(int vetor[], int chave, int tam){
    int inicio = 0;
    int fim = tam - 1;
    while (inicio <= fim) {
        //ENCONTRA O MEIO DO VETOR
        int meio = (inicio + fim) / 2;
        //SE A CHAVE ESTIVER NO MEIO, RETORNA
        if (chave == vetor[meio]) {
            return meio;
        }
        //SE A CHAVE FOR MENOR QUE O VALOR DO MEIO, PASSA PARA O PRÓXIMO ELEMENTO
        if (chave < vetor[meio]) {
            fim = meio - 1;
        }else{
            inicio = meio + 1;
        }
    }
    //SE NÃO ENCONTRAR NADA...
    return 1;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    //VETOR ORDENADO
    int vetor[6] = {1, 3, 5, 8, 12, 42};
    //ELEMENTO CHAVE QUE QUEREMOS ENCONTRAR NO VETOR
    int chave = 1;
    //APLICANDO  A BUSCA BINÁRIA
    int tamanho_vetor = 6;
    int ret = busca_binaria(vetor, chave, tamanho_vetor);
    
    printf("O elemento %d está na posição %d \n", chave, ret);
    
    return 0;
}
