//
//  main.c
//  ifdef
//
//  Created by João Dematé Jr 🤠 on 27/05/20.
//  Copyright © 2020 João Dematé Jr 🤠. All rights reserved.
//

#include <stdio.h>

/*
#ifndef PI
    #define PI 3.14567
#endif
*/
int main() {
    // insert code here...
    int valor = 5;
    
    printf("O valor é %d \n", valor);
    //printf("PI vale %f \n", PI);
    
#ifdef PI
    printf("O valor de PI é %f \n", PI);
#endif
    
    return 0;
}

