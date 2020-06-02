//
//  main.c
//  pilha
//
//  Created by João Dematé Jr 🤠 on 01/06/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

/*

 PILHA / STACK
 
 FILO = FIST IN / LAST OUT
 LIFO = LAST IN / FIRST OUT
 
 [7] => TOPO
 [6]
 [5]
 [4]
 [3]
 [2]
 [1]
 
 OS DADOS SÃO INSERIDOS SEMPRE NO TOPO, OU SEJA SEMPRE QUE UM NOVO ELEMENTO É INSERIDO ELE OCUPA O TOPO DA PILHA;
 
 SÓ TEM ACESSO AO ELEMENTO QUE TA NO TOPO;
 
 O PROCESSO DE INSERIR UM ELEMENTO É CHAMADO DE PUSH;
 
 O PROCESSO DE REMOVER UM ELEMENTO É CHAMADO DE POP;
 
 APLICAÇÃO DA PILHA
 
 https://www.cs.usfca.edu/~galles/visualization/StackArray.html
 
*/

#include <stdio.h>

#define TAMANHO_PILHA 10

int pilha[TAMANHO_PILHA] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int topo = 0;

void lista_elementos(){
    printf("\n ===================  PILHA ATUAL  =================== \n");
    for (int i = 0; i < TAMANHO_PILHA; i++) {
        printf("\n-");
        printf("|%d|", pilha[i]);
        printf("-");
    }
    printf("\nTopo: %d", topo);
    printf("\n \n");
}

void push(){
    int val;
    
    printf("Informe o valor : ");
    scanf("%d", &val);
    
    if (topo < TAMANHO_PILHA) {
        pilha[topo] = val;
        topo = topo + 1;
        lista_elementos();
    }else{
        printf("Pilha cheia... \n");
    }
}

void pop(){
    if (topo >= 0) {
        pilha[topo - 1] = 0;
        topo = topo - 1;
        lista_elementos();
    } else {
        printf("Pilha vazia... \n");
    }
}

void limpar_elementos(){
    for (int i = 0; i < TAMANHO_PILHA; i++) {
        pilha[i] = 0;
    }
    topo = 0;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int opcao = 0;
    
    do {
        
        printf("Selecione a opção: \n\n");
        printf("[1] - Inserir (push) \n");
        printf("[2] - Remover (push) \n");
        printf("[3] - Listar \n");
        printf("[4] - Limpar a pilha \n");
        printf("[-1] - Sair \n");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                lista_elementos();
                break;
            case 4:
                limpar_elementos();
                break;
            case -1:
                break;
            default:
                printf("Opção inválida. \n");
                break;
        }
    } while (opcao != -1);
        
    return 0;
}
