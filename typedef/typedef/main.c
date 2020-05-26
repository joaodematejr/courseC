//
//  main.c
//  typedef
//
//  Created by João Dematé Jr 🤠 on 25/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    typedef float nota;
    
    nota prova1 = 7.0;
    nota prova2 = 6.0;
    
    nota soma = prova1 + prova2;
    
    printf("A soma das notas é %.2f \n", soma);

    return 0;
}
