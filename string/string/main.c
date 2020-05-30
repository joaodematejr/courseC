//
//  main.c
//  string
//
//  Created by João Dematé Jr 🤠 on 29/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>
#include <string.h>

/*

//OPERAÇÕES EM STRINGS
 
strcpy(); //COPIA DE STRING
strcat(); //CONCATENA STRINGS
strcmp(); //COMPARAR DUAS STRINGS
 
//BUSCA
 
strchr(); //LOCALIZA PRIMEIRA OCORRÊNCIA DE CARACTERE EM UMA STRING
strtok(); //DIVIDE UMA STRING EM SUB-STRINGS COM BASE EM UM CARACTERE
strlen(); //RETORNA O TAMANHO DA STRING
 
*/


int main(int argc, const char * argv[]) {
    // insert code here...
    /*
    //STRCAT
    char str1[20], str2[20];
    strcpy(str1, "Quinta-");
    strcpy(str2, "feira");
    strcat(str1, str2);
    printf("%s \n", str1);
    */
    
    /*
    //STRCMP
    char str1[20], str2[20];
    strcpy(str1, "Laranja");
    strcpy(str2, "laranja");
    
    if (strcmp(str1, str2)) {
        printf("Não são iguais. \n");
    }else{
        printf("São iguais \n");
    }
    */
    
    /*
    char str1[] = "joaodematejr@gmail.com";
    char car = '@';
    
    char *ret = strchr(str1, car);
    
    printf("A partir do %c está %s \n", car, ret);
    */
    
    /*
    char str1[] = "joaodematejr@gmail.com";
    printf("Usuário: %s \n", strtok(str1, "@"));
    */
    
    char str1[] = "joaodematejr@gmail.com";
    printf("Tamanho da string: %d \n", strlen(str1));
    return 0;
}
