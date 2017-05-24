# include <stdio.h>
# include <stdlib.h>

const char *OPEN_MODE = "rb";
const short ORIGIN = 0;

unsigned long int getSizeOf(FILE *file){
	fseek(file, ORIGIN, SEEK_END);
	return ftell(file);
}

void printSizeOf(char *filePath){
	FILE *newF;
	newF = fopen(filePath, OPEN_MODE);

	if (newF == NULL)
		printf("El archivo %s no existe\n", filePath);

	else
		printf("Tamaño del archivo %s en bytes: %lu\n", filePath, getSizeOf(newF));
	fclose(newF);
}


int main(int argc, char *argv[]){

	if(argc < 2)
			printf("No se ha seleccionado ningún archivo\n");
	else {
			int index = 0;

			for(index = 1; index < argc; index++)
					printSizeOf(argv[index]);
	}

}
