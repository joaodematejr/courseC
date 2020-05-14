//
//  main.c
//  operacoesMatematicas
//
//  Created by João Dematé Jr 🤠 on 14/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

/*
SOMAR +
SUBTRAIR -
MULTIPLICAR *
DIVIDIR /
ELEVADO AO QUADRADO X * X
MODULO (RESTO DA DIVISÃO DE X POR Y) %
*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1, num2;
    
    float res;
    
    printf("Informe o numero 1: ");
    scanf("%d", &num1);
    
    printf("Informe o numero 2: ");
    scanf("%d", &num2);
    
    //SOMA
    res = num1 + num2;
    printf("A soma é %d \n", (int)res);
    
    //DIMINUIR
    res = num1 - num2;
    printf("A subtração é %d \n", (int)res);
    
    //MULTIPLICAR
    res = num1 * num2;
    printf("A multiplicar é %d \n", (int)res);
    
    //DIVIDIR
    res = (float)num1 / (float)num2; //CAST
    printf("A divisão é %f \n", res);
    
    //ELEVADO AO QUADRADRO
    res = num1 * num1;
    printf("O quadrado de numero 1 é %d \n", (int)res);
    
    //MODULO VERIFICAR SE O NUMERO 1 É PAR OU IMPAR
    if (num1 % 2 == 0) {
        printf("%d é par \n", num1);
    } else {
        printf("%d é impar \n", num1);
    }
    return 0;
}
