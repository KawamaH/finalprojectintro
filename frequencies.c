#include "frequencies.h"
#include <stdio.h>

void numbersFrequency(int data[266][6]) {
	int frequencies[43][6] = {0}; 
	
	
	for (int row = 0; row < 266; row++) {
		for (int column = 0; column < 5; column++) { 
			int number = data[row][column];
			frequencies[number - 1][column]++; 
		}
	}
	
	
	for (int i = 0; i < 43; i++) {
		for (int j = 0; j < 6; j++) {
			printf("%d ", frequencies[i][j]);
		}
		printf("\n");
	}
}
