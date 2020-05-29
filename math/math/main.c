//
//  main.c
//  math
//
//  Created by João Dematé Jr 🤠 on 29/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>
#include <math.h>

/*
 
 FUNÇÕES MATEMÁTICAS

 OBS: PARA UTILIZAR A BIBLIOTECA MATH:
 
 A) CLICAR COM O BOTÃO DIREITO NO MOUSE NO PROJETO_C;
 B) IT EM C/C++ BUILD => SETTINGS => LIBRARIES
 C) CLICAR NO + E ADD `M`
 D) APLICAR E FECHAR
 
 FUNÇÕES TRIGONOMÉTRICAS
 
 //cos(); //CALCULA O COSSENO DE UM ÂNGULO EM RADIANOS.
 //sin(); CALCULA O SENO DEU UM ÂNGULO EM RADIANOS
 //tang(); //CALCULA A TANGENTE DE UM ÂNGULO EM RADIANOS
 
 FUNÇÕES HIPERBÓLICAS
 
 //cosh(); //CALCULA O CONSENO HIPERBÓLICO DE UM ÂNGULO EM RADIANOS
 //sinh(); //CALCULA O SENO HIPERBÓLICO DE UM ÂNGULO EM RADIANOS
 //tanh(); //CALCULA O TANGENTE HIPERBÓLICO DE UM ÂNGULO EM RADIANOS
 
 FUNÇÕES EXPONECIAIS E LOGARITMICAS
 
 //exp(); // FUNÇÃO EXPONECIAL
 //log(); // LOGARITIMO NATURAL
 //log10(); //LOGARITIMO BASE10
 
 //FUNÇÕES DE POTÊNCIA
 
 //pow() //RETORNA A BASE ELEVADA AO EXPOENTE
 //sqrt(); //RAIZ QUADRADA DE UM NÚMERO;
 
 //FUNÇÕES DE ARREDONDAMENTO VALOR ABSOLUTO E OUTRAS
 
 ceil(); //ARREDONDA PARA CIMA UM NÚMERO
 floor(); //ARREDONDA PARA BAIXO UM NÚMERO
 
*/

int main(int argc, const char * argv[]) {
    // insert code here...
    //int angulo = 45;
    //float res = cos(angulo);
    
    //float res = sin(angulo);
    
    //float res = tan(angulo);
    
    //float res = cosh(angulo);
    
    //float res = sinh(angulo);
    
    //float res = tanh(angulo);
    
    //printf("O resultado de %d é %f \n", angulo, res);
    
    //FUNÇÕES EXPONECIAIS E LOGARITMICAS
    
    /*
    double a = 0;
    double b = 1;
    double c = 2;
    
    printf("O exponencial de %lf é %lf \n", a, exp((a)));
    printf("O exponencial de %lf é %lf \n", b, exp((b)));
    printf("O exponencial de %lf é %lf \n", c, exp((c)));
    */
    
    /*
    int valor = 42;
    
    printf("O log de %d é %lf \n", valor, log(valor));
    
    printf("O log base10 de %d é %lf \n", valor, log10(valor));
     */
    
    /*
    int a = 3;
    int b = 2;
    
    printf("%d elevado a %d é %lf \n", a, b, pow(a, b));
    
     */
    
    /*
    int a = 9;
    printf("A raiz quadrada de %d é %lf \n", a , sqrt(a));
    */
    
    double a = 4.67891;
    //CEIL
    printf("O valor %lf arredondado é %lf \n", a, ceil(a));
    //FLOOR
    printf("O valor %lf arredondado é %lf \n", a, floor(a));
    
    return 0;
}
