#include <stdio.h>
#include <stdlib.h>

/**
 * Contador por defecto para revisión
 * de parametros de entrada
 */
#define CONTADOR_POR_DEFECTO 3

int main (int argc, char *argv[]){
 int i;
 int contador;

 printf("El nombre de este programa es %s \n", argv[0]);

 for (i = 0; i < argc; i++)
 {
   printf("Parametro de entrada %d, es : %s \n", i, argv[i]);
 }

 if (argv[1] == NULL){
	 contador = CONTADOR_POR_DEFECTO;
 } else {
 contador = atoi(argv[1]);
 }

 for(i = 0; i < contador; i++)
 {
   printf("Contador = %d \n", i);
 }

 return 0;
}
