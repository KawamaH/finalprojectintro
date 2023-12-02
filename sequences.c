#include <stdio.h>
#include "sequences.h"

void countSequences(int data[MAX_ROWS][MAX_COLS], int rows, int cols) {
	SequenceInfo sequence_info[MAX_COLS] = {0};
	
	for (int col = 0; col < cols; col++) {
		int ascending_count = 0, descending_count = 0;
		int current_asc_length = 1, current_desc_length = 1;
		int current_asc_value = data[0][col];
		int current_desc_value = data[0][col];
		
		for (int i = 1; i < rows; i++) {
			if (data[i][col] == current_asc_value + 1) {
				current_asc_length++;
				current_asc_value = data[i][col];
				if (current_asc_length > 1) {
					ascending_count++;
				}
			} else {
				current_asc_length = 1;
				current_asc_value = data[i][col];
			}
			
			if (data[i][col] == current_desc_value - 1) {
				current_desc_length++;
				current_desc_value = data[i][col];
				if (current_desc_length > 1) {
					descending_count++;
				}
			} else {
				current_desc_length = 1;
				current_desc_value = data[i][col];
			}
		}
		
		sequence_info[col].ascending_count = ascending_count;
		sequence_info[col].descending_count = descending_count;
	}
	
	for (int col = 0; col < cols; col++) {
		printf("Columna %d - Secuencias Ascendentes: %d, Secuencias Descendentes: %d\n",
			   col + 1, sequence_info[col].ascending_count, sequence_info[col].descending_count);
	}
}
