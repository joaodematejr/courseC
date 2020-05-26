//
//  main.c
//  tiposStructs
//
//  Created by João Dematé Jr 🤠 on 24/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>
#include <string.h>

struct st_aluno{
    char matricula[10];
    char nome[100];
    char curso[50];
    int ano_nascimento;
}aluno1;

int main(int argc, const char * argv[]) {
    
    printf("Informe a matricula do aluno: ");
    fgets(aluno1.matricula, 10, stdin);
    
    printf("Informe a nome do aluno: ");
    fgets(aluno1.nome, 5, stdin);
    
    printf("Informe a curso do aluno: ");
    fgets(aluno1.curso, 50, stdin);
    
    printf("Informe a ano de nascimento do aluno: ");
    scanf("%d", &aluno1.ano_nascimento);
    
    printf("======================== DADOS DO ALUNO ================ \n");
    printf("Matricula: %s\n", aluno1.matricula);
    printf("Nome: %s\n", aluno1.nome);
    printf("Curso: %s\n", aluno1.curso);
    printf("Ano de nascimento: %d\n", aluno1.ano_nascimento);
    
    return 0;
}
