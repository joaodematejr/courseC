//
//  main.c
//  arvoreBinaria
//
//  Created by João Dematé Jr 🤠 on 01/06/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

/*

//ARVORE BINÁRIA - BINARY TREE
 
SÃO ESTRUTURAS DE DADOS CARACTERIZADOS POR:
 
OU, NÃO TEM ELEMENTO ALGUM (ÁRVORE VAZIA);
OU TEM UM ELEMENTO DISTINTO, DENOMINADO RAIZ, COM DOIS APONTAMENTOS PARA DUAS ESTRUTURAS DIREFERENTES, DENOMINADOS SUB-ÁRVORE ESQUERDA E SUA SUB-ÁRVORE DIREITA.
 
*/

#include <stdio.h>
#include <stdlib.h>

struct st_arvore {
    int valor;
    struct st_arvore *sad; //SUB-ÁRVORE DIREITA
    struct st_arvore *sae; //SUB-ÁRVORE ESQUERDA
};

typedef struct st_arvore arvore;

arvore* criaArvore(){
    return NULL;
}

int arvoreEstaVazia(arvore* t){
    return t == NULL;
}

void mostraArvore(arvore* t){
    printf("<");
    if (!arvoreEstaVazia(t)) {
        printf("%d ", t -> valor);
        mostraArvore(t -> sae);
        mostraArvore(t -> sad);
    }
    printf(">");
}

void insereDadoArvore(arvore** t, int num){
    if (*t == NULL) {
        *t = (arvore*)malloc(sizeof(arvore));
        (*t) -> sae = NULL;
        (*t) -> sad = NULL;
        (*t) -> valor = num;
    }else{
        if (num < (*t) -> valor) {
            insereDadoArvore(&(*t) -> sae, num);
        }
        if (num > (*t) -> valor) {
             insereDadoArvore(&(*t) -> sad, num);
        }
    }
}

int estaNaArvore(arvore* t, int num){
    if (arvoreEstaVazia(t)) {
        return 0;
    }
    return t -> valor == num || estaNaArvore(t -> sae, num) || estaNaArvore(t -> sad, num);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    arvore* t = criaArvore();
    
    insereDadoArvore(&t, 12);
    insereDadoArvore(&t, 15);
    insereDadoArvore(&t, 10);
    insereDadoArvore(&t, 13);
    
    mostraArvore(t);
    
    if (arvoreEstaVazia(t)) {
        printf("\n \n Árvore vazia !! \n");
    }else{
        printf("\n \n Árvore NÃO vazia !!! \n");
    }
    
    if (estaNaArvore(t, 15)) {
        printf("\n O elemento 15 pertence a árvore ! \n");
    }else{
        printf("\n O elemento 15 não pertence a árvore ! \n");
    }
    
    if (estaNaArvore(t, 22)) {
        printf("\n O elemento 22 pertence a árvore ! \n");
    }else{
        printf("\n O elemento 22 não pertence a árvore ! \n");
    }
    
    free(t);
    return 0;
}
