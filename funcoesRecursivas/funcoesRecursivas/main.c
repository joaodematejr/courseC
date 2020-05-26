//
//  main.c
//  funcoesRecursivas
//
//  Created by João Dematé Jr 🤠 on 26/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

//RECURSIVIDADE É O ATO DE UMA FUNÇÃO CHAMAR A SI MESMA
//OBS: É IMPORTANTE QUE A FUNÇÃO RECURSIVA TENHA UMA CONDIÇÃO DE PARADA

/*
 
 5 PRIMEIROS NÚMEROS DA SEQUÊNCIA FIBONACCI
 1 1 2 3 5
 
*/

int fib(int n){
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fib(n - 1) + fib(n -2);
}


int main() {
    // insert code here...
    int quantidade;
    printf("Informe o tamanho da sequência fibonacci: ");
    scanf("%d", &quantidade);
    for (int i = 0; i < quantidade; i++) {
        printf("%d ", fib(i + 1));
    }
    printf("\n");
    return 0;
}
