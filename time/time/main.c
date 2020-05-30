//
//  main.c
//  time
//
//  Created by João Dematé Jr 🤠 on 29/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>
#include <time.h>

/*

 FUNÇÕES DE DATA E HORA
 
//clock(); RETORNA O NÚMERO DE PULSOS DE CLOCK DECORRIDO DESDE QUE O PROGRAMA FOI INICIADO
//time() //RETORNA O TEMPO ATUAL DO CALENDÁRIO
//localtime() // CONVERTE O VALOR TIME PARA UMA HORA LOCAL
 
*/

int main(int argc, const char * argv[]) {
    // insert code here...
    /*
    long int  inicio_t, fim_t, total_t;
    inicio_t = clock();
    printf("Realizar um loop grande, inicio_t = %ld\n", inicio_t);
    for (int i = 0; i <= 1000000000; i++) {}
    fim_t = clock();
    printf("Fim do loop grande, fim_t = %ld \n", fim_t);
    total_t = (double)(fim_t - inicio_t) / CLOCKS_PER_SEC;
    printf("Clock por segundos: %ld \n", CLOCKS_PER_SEC);
    printf("Tempo total usado pela CPU: %ld \n", total_t);
    printf("Finalizando o programa");
    */
    
    /*
    time_t segundos;
    segundos = time(NULL);
    printf("Horas desde 1 de Janeiro de 1970 = %ld\n", segundos/3600);
    */
    
    time_t tempobruto;
    struct tm * info;
    time(&tempobruto);
    info = localtime(&tempobruto);
    printf("Data e hora local %s", asctime(info));
     
     return 0;
}
