//
//  main.c
//  stdlib
//
//  Created by João Dematé Jr 🤠 on 27/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

/*

atof(); //CONVERTE STRING PARA DOUBLE
atoi(); //CONVERTE STRING PARA INT
atol(); //CONVERTE STRING PARA LONG
 
*/


//GERAÇÃO DE SEQUÊNCIA PSEUDO-ALEATÓRIO

/*

rand(); //GERAR NÚMERO ALEATÓRIO
srand(); //INICIALIZA O GERADOR DE NÚMEROS ALEATÓRIOS
 
*/

//GERENCIAMENTO DE MEMÓRIA DINÂMICA

/*

malloc();
callod();
free();
realoc();

*/

//PESQUISA E ORDENAÇÃO

/*
 
qsort(); ORDENA OS ELEMENTOS DE UM ARRAY
 
*/

/*
 
ARITMÉTICA DE INTEIROS
abs() //VALOR ABSOLUTO
div() //DIVISÃO INTEIRA
 
*/

int compara(int *x, int *y){
    if (*x > *y) {
        return 1;
    }else if(*x == *y){
        return 0;;
    }else{
        return -1;
    }
}

int main() {
    // insert code here...
    /*
    char valor_s[5];
    double valor_d;
    //INTEIRO
    int valor_i;
    
    strcpy(valor_s, "4.5");
    //STRING PARA DOUBLE
    valor_d = atof(valor_s);
    //STRING PARA INT
    valor_i = atoi(valor_s);
    
    printf("O valor é %.2f \n", valor_d);
    printf("O Valor é %d \n", valor_i);
   
    char valor_s[500];
    double valor_li;
    
    strcpy(valor_s, "4999994454646546");
    
    valor_li = atol(valor_s);
    
    printf("O Valor é %lf \n"  , valor_li);
     */
    

    //GERAR 6 NÚMEROS ENTRE 0 E 60
    
    /*
    for (int i = 0; i < 6; i++) {
        printf("%d\n", rand() % 61);
    }
     
    */
    
    /*
    
    int numeros[] = {6, 2, 9, 3, 7, 1, 5};
    
    //QSORT();
    
    qsort(numeros, 7, sizeof(int), (void * ) compara);
    
    for (int i = 0; i < 7; i++) {
        printf("%d \n", numeros[i]);
    }
    */
    
    /*
     
    int valor_a, valor_b;
    
    valor_a = abs(5);
    
    printf("O valor absoluto de 5 é %d \n", valor_a);
    
    valor_b = abs(-10);
    
    printf("O valor absoluto de -10 é %d \n", valor_b);
     
    */
    
    div_t saida;
    
    saida = div(27, 4); // 27 / 4
    
    printf("O quociente de (27/4) é %d \n", saida.quot);
    printf("O resto de (27/4) é %d \n", saida.rem);
    
     saida = div(27, 3); // 27 / 3
    
    printf("O quociente de (27/3) é %d \n", saida.quot);
    printf("O resto de (27/3) é %d \n", saida.rem);
    
    
    return 0;
}
