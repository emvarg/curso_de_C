#include <stdio.h>
#include <stdlib.h>

/**
 * Contador por defecto para revisión
 * de parametros de entrada
 */
#define CONTADOR_POR_DEFECTO 3
#define VARIABLE_POR_DEFECTO 0

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

 // Obtener info de las variables de entorno
 char *entrada_de_variable = getenv("MY_VARIABLE");
 int variable_tipo_entero;

 if (entrada_de_variable == NULL){
	 variable_tipo_entero = VARIABLE_POR_DEFECTO;
 } else {
	 printf("hit");
 variable_tipo_entero = atoi(entrada_de_variable);
 }

 if (variable_tipo_entero){
   printf("Variable tipo entero fue definida correctamente! %d \n", variable_tipo_entero);
 } else {
   printf("Variable tipo entero NO fue definida correctamente! \n");
 }

 return 0;
}
