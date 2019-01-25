#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DATOS_MAX  10
#define RANDOM_MAX 100

int main(){
	int i, j;
	int mapa_de_datos[DATOS_MAX];
	int mapa_de_datos_multi[DATOS_MAX][DATOS_MAX];
        srandom(time(NULL));

   for (i=0; i<DATOS_MAX; i++){
     mapa_de_datos[i] = random()%RANDOM_MAX;
   }

   printf("----------- Contenido del mapa de datos -----------\n");
   for (i=0; i<DATOS_MAX; i++){
	   printf("mapa_de_datos[%d] = %d \n",i, mapa_de_datos[i]);
   }

   for (i=0; i<DATOS_MAX; i++){
     for (j=0; j<DATOS_MAX; j++){
     mapa_de_datos_multi[i][j] = random()%RANDOM_MAX;
     }
   }

	return 0;
}
