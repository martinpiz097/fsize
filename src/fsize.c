# include <stdio.h>

int main(int argc, char *argv[]){

	if(argc == 1)
		printf("No se ha seleccionado ningún archivo\n");
	else if(argc == 2){
		FILE *newF = fopen(argv[1], "r");
		fseek(newF, 0, SEEK_END);
		unsigned long int size = ftell(newF);
		printf("%lu\n", size);
		fclose(newF);
	}
	else
		printf("Cantidad de parámetros inválida\n");
	
}
