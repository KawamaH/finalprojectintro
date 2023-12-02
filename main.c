#include <stdio.h>
#include "data.h"
#include "frequencies.h"
#include "sequences.h"
#include "analysislastcolumn.h"
int main() {
	int data[MAX_ROWS][MAX_COLS];
	int rows = 0, cols = 0;
	
	readCSV("Datos.csv", data, &rows, &cols);
	//numbersFrequency(data);
	//countSequences(data, rows, cols);
	analyzeLastColumn(data);
	return 0;
}
