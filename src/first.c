#include <stdio.h>

int main (){
	int dato_entero = 12;
	char dato_caracter = 'C';

	printf("Mi dato entero es: %d, y el ocupa %lu bytes\n", dato_entero, sizeof(int));
	printf("Mi dato caracter es: %c y el ocupa %lu bytes\n", dato_caracter, sizeof(dato_caracter));

return 0;
}
