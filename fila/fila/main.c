//
//  main.c
//  fila
//
//  Created by João Dematé Jr 🤠 on 31/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

/*

FILA / QUEUE
 
- FILA DE BANCO;
- O ELEMENTO QUE ENTRA PRIMEIRO, SAI PRIMEIRO;
- SEMPRE QUE U ELEMENTO É ADICIONADO NA FILA, ELE VAI PRO FINAL DELA;
- SEMPRE QUE REMOVEMOS UM ELEMENTO, O PRIMEIRO É REMOVIDO;

FIFO FIRST IN / FIRST OUT
 
enqueue(); ADICIONA UM ELEMENTO NA FILA;
daqueue(); REMOVER O ELEMENTO DA FILA;
clear(); LIMPAR A FILA;
fila[10] - [0][1][2][3][4][5][6][7][8][9];
head => CABEÇA DA FILA, INDICA QUEM É O PRIMEIRO ELEMENTO DA FILA;
tail => CALDA , INDICA QUANTOS ELEMENTOS TEM NA FILA;

APLICAÇÃO: EM QUALQUER SITUAÇÃO ONDE A GENTE TENHA QUE ORGANIZAR O ATENDIMENTO DE ELEMENTOS;
 
 

*/

#include <stdio.h>

#define TAMANHO_FILA 10

// FILA/QUEUE

//https://www.cs.usfca.edu/~galles/visualization/QueueArray.html

int fila[TAMANHO_FILA] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int head = 0; //PRÓXIMO A SER ATENDIDO;
int tail = 0; //ÚLTIMO DA FILA;

void lista_elementos(){
    printf("\n ============== FILA ATUAL ==============\n ");
    for (int i = 0; i < TAMANHO_FILA; i++) {
        printf("-");
        printf("|%d|", fila[i]);
        printf("-");
    }
    printf("\nHead: %d \n", head);
    printf("Tail: %d \n", tail);
}

void enqueue(){
    int val;
    if (tail < TAMANHO_FILA) {
        printf("Informe o elemento para adicionar na fila: ");
        scanf("%d", &val);
        fila[tail] = val;
        tail = tail + 1;
        lista_elementos();
    }else{
        printf("A fila está cheia... \n");
    }
}

void dequeue(){
    if (head < tail) {
        fila[head] = 0;
        head = head  + 1;
        lista_elementos();
    }else{
        printf("A fila está vazia... \n");
    }
}

void limpar(){
    for (int i = 0; i < TAMANHO_FILA; i++) {
        fila[i] = 0;
        head = 0;
        tail = 0;
        
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int opcao = 0;
    
    do {
        printf("Selecione a opção \n\n");
        printf("[1] - Inserir (enqueue): \n");
        printf("[2] - Remover (dequeue): \n");
        printf("[3] - Listar: \n");
        printf("[4] - Limpar a fila: \n");
        printf("[-1] - Sair: \n");
        printf("Opção: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                lista_elementos();
                break;
            case 4:
                limpar();
                break;
            case -1:
                break;
            default:
                printf("Opção inválida.");
                break;
        }
    } while (opcao != -1);
    return 0;
}
