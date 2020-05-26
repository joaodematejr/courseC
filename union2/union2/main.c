//
//  main.c
//  union2
//
//  Created by João Dematé Jr 🤠 on 25/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

union numeros {
    int num1, num2, num3, num4, num5;
}n;

int main(int argc, const char * argv[]) {
    // insert code here...
    int soma = 0; //4 BYTES
    n.num1 = 1;
    soma = soma + n.num1;
    printf("O valor de Num1 é %d \n", n.num1);
    n.num2 = 3;
    soma = soma + n.num2;
    printf("O valor de Num2 é %d \n", n.num2);
    n.num3 = 5;
    soma = soma + n.num3;
    printf("O valor de Num3 é %d \n", n.num3);
    n.num4 = 7;
    soma = soma + n.num4;
    printf("O valor de Num4 é %d \n", n.num4);
    n.num5 = 9;
    soma = soma + n.num5;
    printf("O valor de Num5 é %d \n", n.num5);
    
    printf("O valor de Num1 é %d \n", n.num1);
    printf("O valor de Num2 é %d \n", n.num2);
    printf("O valor de Num3 é %d \n", n.num3);
    printf("O valor de Num4 é %d \n", n.num4);
    printf("O valor de Num5 é %d \n", n.num5);
    
    printf("'n' está ocupando %ld bytes em memória \n ", sizeof(n));
    
    printf("Soma = %d \n", soma);
    
    printf("Memória total ocupada %ld \n", (sizeof(n) + sizeof(soma)));
    
    return 0;
}
