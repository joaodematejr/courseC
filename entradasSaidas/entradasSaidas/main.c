//
//  main.c
//  entradasSaidas
//
//  Created by João Dematé Jr 🤠 on 22/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    FILE *arq;
    //FOPEN(NOME-DO-ARQUIVO, FORMA-DE-ABERTURA-DO-ARQUIVO);
    //W - ABRIR O ARQUIVO PARA ESCRITA
    //R - ABRIR O ARQUIVO PARA LEITURA (NÃO PODEMOS ESCREVER NO ARQUIVO)
    //WA ABRIR O ARQUIVO PARA ADIÇÃO DE CONTEÚDO(SE O ARQUIVO JÁ EXIBIR, O CONTEUDO SERÁ ADICIONADO NAS LINHAS ABAIXO)
    arq = fopen("arquivo.txt", "w");
    
    // SEMPRE QUE A GENTE FINALIZAR A MANIPULAÇÃO DE UM ARQUIVO, DEVEMOS FECHÁ-LO
    fclose(arq);
    
    
    return 0;
}
