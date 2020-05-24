//
//  main.c
//  lerArquivos
//
//  Created by João Dematé Jr 🤠 on 23/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

/*
int main(int argc, const char * argv[]) {
    FILE * arq;
    char c;
    arq = fopen("arquivo.txt", "r");//LEITURA
    if (arq) {
        while ((c = getc(arq)) != EOF) { //EOF = END OF FILE // FIM DO ARQUIVO
            printf("%c", c);
        }
    }else{
        printf("Não achei o arquivo \n");
    }
    
    return 0;
}
*/
/*
int main(int argc, const char * argv[]) {
    FILE * arq;
    char nome[10], resultado;
    arq = fopen("arquivo.txt", "r");//LEITURA
    if (arq) {
        while (!feof(arq)) { //FEOF FILE END OF FILE // FIM DO ARQUIVO
            resultado = fgets(nome,10, arq);
            printf("Resultado: %d\n", resultado);
            if (resultado) {
                printf("%s\n", nome);
            }
            
        }
    }else{
        printf("Não achei o arquivo \n");
    }
    fclose(arq);
    return 0;
}
*/

int main(int argc, const char *argv[])
{
    FILE *arq;
    int num, resultado, soma = 0;
    arq = fopen("numeros.txt", "r"); //LEITURA
    if (arq)
    {
        while (!feof(arq)){
            resultado = fscanf(arq, "%d", &num);
            printf("Resultado : %d\n" , resultado);
            if (resultado == 1) {
                soma = soma + num;
            }
        }
    }
    else
    {
        printf("Não achei o arquivo \n");
    }
    printf("A soma dos números encontrados é %d \n", soma);
    fclose(arq);
    return 0;
}
