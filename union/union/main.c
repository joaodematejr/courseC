//
//  main.c
//  union
//
//  Created by João Dematé Jr 🤠 on 25/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>
#include <string.h>

//A UNION, SEPARA E UTILIZA APENAS O ESPAÇO DA MAIOR VARIÁVEL.

union pessoa{
    char nome[100]; //1 CHAR = 1 BYTE => * 100 = 100 BYTES
    int idade; // 4 BYTES => TOTAL DE 104 BYTES
}pess;

int main(int argc, const char * argv[]) {
    /*
    int numero = 42;
    float nota = 7.9;
    char letra = 'd';
    double outra_nota = 19.4;
    
    printf("A variavel 'numero' tem valor %d e ocupa %ld bytes en memória\n", numero, sizeof(numero));
    printf("A variavel 'nota' tem valor %.2f e ocupa %ld bytes en memória\n", nota, sizeof(nota));
    printf("A variavel 'letra' tem valor %c e ocupa %ld bytes en memória\n", letra, sizeof(letra));
    printf("A variavel 'outra_nota' tem valor %.2f e ocupa %ld bytes en memória\n", outra_nota, sizeof(outra_nota));
    */
    
    union pessoa pes;
    strcpy(pes.nome, "João Dematé");
    printf("Dados de %s \n", pes.nome);
    
    pes.idade = 39;
    printf("Ela tem %d anos \n", pes.idade);
    
    printf("A variável 'pes', está ocupando %ld bytes em memória. \n", sizeof(pes));
    
    return 0;
}
