#include <stdio.h>

int main (){
	int dato_entero = 12;
	char dato_caracter = 'C';
	unsigned int entero_sin_signo = 30;
	float dato_punto_flotante = 3.1416;
	double dato_double = 123123123123123.2343;
	long double dato_long_double = 123123123123123.1232;

	printf("Mi dato entero es: %d, y el ocupa %lu bytes\n", dato_entero, sizeof(int));
	printf("Mi dato caracter es: %c y el ocupa %lu bytes\n", dato_caracter, sizeof(dato_caracter));
	printf("Mi dato caracter es: %u y el ocupa %lu bytes\n", entero_sin_signo, sizeof(entero_sin_signo));
	printf("Mi dato caracter es: %f y el ocupa %lu bytes\n", dato_punto_flotante, sizeof(dato_punto_flotante));
	printf("Mi dato caracter es: %lfy el ocupa %lu bytes\n", dato_double, sizeof(dato_double));
	printf("Mi dato caracter es: %Lfy el ocupa %lu bytes\n", dato_long_double, sizeof(dato_long_double));

return 0;
}
