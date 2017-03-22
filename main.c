//#include <stdlib.h>
#include <stdio.h>
#include "util.h"

int main(int argc, char *argv[]){
	char *filename = argv[1];
	printf("Tamaño: %d\n",filesize(filename));
}
