#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// D E F I N E S
#define DATOS_MAX  10
#define RANDOM_MAX 100

// DECLARATIONS

int fill_2d(int mapa_de_datos[DATOS_MAX][DATOS_MAX]);
int fill_1d(int mapa_de_datos[DATOS_MAX]);

// M A I N   F U N C T I O N
int main(){
	int i, j;
	int mapa_de_datos[DATOS_MAX];
	int mapa_de_datos_multi[DATOS_MAX][DATOS_MAX];
        srandom(time(NULL));

	fill_1d(mapa_de_datos);
	fill_2d(mapa_de_datos_multi);
	return 0;
}

// H E L P E R   F U N C T I O N S
/* Función para llenar arreglos de una dimensión */
int fill_1d(int mapa_de_datos[DATOS_MAX]){

for (int i=0; i<DATOS_MAX; i++){
                mapa_de_datos[i] = random()%RANDOM_MAX;
                   }

   printf("----------- Contenido del mapa de datos -----------\n");
      for (int i=0; i<DATOS_MAX; i++){
                         printf("mapa_de_datos[%d] = %d \n",i, mapa_de_datos[i]);
                            }
      return 0;
}

/* Función para llenar arreglos de dos dimensiones */
int fill_2d(int mapa_de_datos[DATOS_MAX][DATOS_MAX]){
   for (int i=0; i<DATOS_MAX; i++){
     for (int j=0; j<DATOS_MAX; j++){
     mapa_de_datos[i][j] = random()%RANDOM_MAX;
     }
   }

   printf("----------- Contenido del mapa de datos multidim -----------\n");
   for (int i=0; i<DATOS_MAX; i++){
     for (int j=0; j<DATOS_MAX; j++){
	   printf("mapa_de_datos_multi[%d][%d] = %d \n",i,j, mapa_de_datos[i][j]);
   }
  }
}


