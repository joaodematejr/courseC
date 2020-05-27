//
//  main.c
//  stdio
//
//  Created by João Dematé Jr 🤠 on 27/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

/*

 FUNÇÕES DE ENTRADA E SAIDA:
 ACESSO A ARQUIVOS;
 
 fclose(); // FECHAR UM ARQUIVO JÁ ABERTO
 fffush(); // FUNÇÃO LIMPAR BUFFER. (CORRIGE UM BUG DO WINDOWS + C + ECLIPSE)
 fopen(); // FUNÇÃO ABRIR ARQUIVO
 fscanf(); // LER DADOS DE UM ARQUIVO
 prinf(); // IMPRIMIR DADOS
 
 //ENTRADAS E SAIDAS DE CARACTERES
 gets();
 fputs();
 getchar();
 fgets();
 
 //TRATAMENTO DE ERROS
 feof();
 
 //TIPOS DE MACROS
 
 FILE
 EOF
 NULL
 
*/
#include <stdio.h>


int main(int argc, const char * argv[]) {
    // insert code here...
    int num1, num2, soma;
    
    printf("Informe o num1: ");
    fflush(stdout);
    scanf("%d", &num1);
    
    printf("Informe o num2: ");
    fflush(stdout);
    scanf("%d", &num2);
    
    soma = num1 + num2;
    
    printf("A soma de %d com %d é %d \n", num1, num2, soma);
    
    return 0;
}
