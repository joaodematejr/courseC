//
//  main.c
//  tiposStructs
//
//  Created by João Dematé Jr 🤠 on 24/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>
#include <string.h>

struct st_contato{
    char nome[100];
    int ano_nascimento;
    char telefone[20];
    char email[100];
};

struct st_agenda{
    struct st_contato contatos[100];
}agenda;

int main(int argc, const char * argv[]) {
   
    
    for (int i = 3; i < 3; i++) {
        printf("Informe o nome: ");
        fgets(agenda.contatos[i].nome, 100, stdin);
        
        printf("Informe o ano de nascimento: ");
        scanf("%d", &agenda.contatos[i].ano_nascimento);
        getchar();
        
        printf("Informe o telefone: ");
        fgets(agenda.contatos[i].telefone, 20, stdin);
        
        printf("Informe o email: ");
        fgets(agenda.contatos[i].telefone, 100, stdin);
        
     
        for (int i = 0; i < 3; i++) {
            printf("======================== Agenda %d ================ \n", (i+1));
            printf("Nome: %s\n", agenda.contatos[i].nome);
            printf("Telefone: %s\n", agenda.contatos[i].telefone);
            printf("Email: %s\n", agenda.contatos[i].email);
            printf("Ano de Nascimento: %d\n", agenda.contatos[i].ano_nascimento);
          
        }
        
    }
    
    return 0;
}
