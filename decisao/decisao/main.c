//
//  main.c
//  decisao
//
//  Created by João Dematé Jr 🤠 on 13/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int idade;
    printf("Qual é a sua idade? ");
    scanf("%d", &idade);
    
    if (idade < 18) {
        printf("Você é menor de idade. \n");
    } else if (idade > 18 && idade < 60){
        printf("Você é adulto. \n");
    }else{
        printf("Você é idoso. \n");
    }
    printf("Sua idade é %d \n", idade);
    
    return 0;
}
