//
//  Factorial
//  Solo se puede calcular el factorial hasta 1754
//
//  Created by PauMB 
//  Company: HedaSoft
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, const char * argv[])
{
    
    /*comprobamos que nos introducen un valor*/
    if (argc != 2) {
        fprintf(stderr, "USO: ./factorial + número\n");
        return 0;
    }
    
    /*comprobamos que se ha introducido un valor*/
    if(isalpha(*argv[1]) != 0){
        fprintf(stderr, "No ha introducido un numero\n");
        return 1;
    }
    
    /*transformamos el valor introducido a entero*/
    int entrada = atoi(argv[1]);

    /*comprobamos que no sea negativo*/
    if (entrada < 0) {
        fprintf(stderr, "El valor introducido es negativo\n");
        return 1;
    }
    
    long double f = 1;
    
    /*Operamos*/
    
    if (entrada > 0) {
        int i;
        for (i=entrada; i>0; i--) {
            f *= i;
        }
    }

    /*imprimimos por la salida estandar el valor del factorial*/
    fprintf(stdout,"El factorial de %s es: %.4060Lg\n",argv[1],f);
    return 0;
}
