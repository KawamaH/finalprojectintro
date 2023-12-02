#ifndef SEQUENCES_H
#define SEQUENCES_H

#define MAX_ROWS 266
#define MAX_COLS 6

typedef struct {
	int ascending_count;
	int descending_count;
} SequenceInfo;

void countSequences(int data[MAX_ROWS][MAX_COLS], int rows, int cols);

#endif /* SEQUENCES_H */
