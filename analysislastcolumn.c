// patrones.c
#include <stdio.h>
#include "analysislastcolumn.h"

void analyzeLastColumn(int data[MAX_ROWS][MAX_COLS]) {
	int asociaciones[5][16] = {0};
	
	for (int i = 0; i < MAX_ROWS; i++) {
		int columna_sexta = data[i][5] - 1;
		for (int j = 0; j < 5; j++) {
			int valor_columna = data[i][j] - 1;
			asociaciones[j][columna_sexta] += 1;
		}
	}
	
	printf("Asociaciones entre valores de las primeras cinco columnas y la sexta columna:\n");
	for (int i = 0; i < 5; i++) {
		printf("Columna %d:\n", i + 1);
		for (int j = 0; j < 16; j++) {
			printf("Valor %d: %d veces\n", j + 1, asociaciones[i][j]);
		}
		printf("\n");
	}
}
