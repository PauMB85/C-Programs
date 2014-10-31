//
//  VariableEntorno
//  Se trata de un programa sencillo para familiarizarse con las variables de entorno
//
//  Created by PauMB on 20/04/14.
//  Company: HedaSoft
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, const char * argv[])
{

    /*Comprobamos si hay variable de entorno*/
    char *entorno = getenv("Entorno");
    if (entorno == NULL) {
        fprintf(stderr,"No hay variable de entorno\n");
        return 1;
    }
    
    /*comprobamos que el valor de entorno es un entero*/
    if (isalpha(entorno != 0)) {
        fprintf(stderr, "No es un entero\n");
        return 1;
    }

    /*pasamos a entero*/
    int valor;
    valor = atoi(entorno);
    
    /*Comprobamos que no sea zero o negativo*/
    if (valor<=0) {
        fprintf(stderr, "El valor de Entorno es menor o igual que cero\n");
        return 1;
    }
    
    fprintf(stdout, "el valor de Entorno es %d\n", valor);
    return 0;
}
