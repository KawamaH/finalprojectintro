#include "data.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void readCSV(const char *filename, int data[MAX_ROWS][MAX_COLS], int *rows, int *cols) {
	FILE *file = fopen(filename, "r");
	
	if (file == NULL) {
		printf("Could not open the file.\n");
		exit(1);
	}
	
	int row = 0, col = 0;
	char line[MAX_COLS * MAX_FIELD_LENGTH];
	
	while (fgets(line, sizeof(line), file) && row < MAX_ROWS) {
		col = 0;
		char *token = strtok(line, ",");
		
		while (token != NULL && col < MAX_COLS) {
			data[row][col] = atoi(token); // Convierte el token a número entero
			token = strtok(NULL, ",");
			col++;
		}
		row++;
	}
	
	fclose(file);
	
	*rows = row;
	*cols = col;
}
