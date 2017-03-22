#include <stdlib.h>
#include <stdio.h>

int filesize(char *filename){
	FILE *archivo;
	int tam = 0;
	archivo =fopen(filename, "r");
	if(archivo){
	
		while(fgetc(archivo) != EOF){
			tam++;
		}
		
	}else{
		printf("No se pudo abrir");
		tam= -1;
	}
	return tam;
	
}
