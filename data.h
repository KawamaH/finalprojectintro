#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

#define MAX_ROWS 266
#define MAX_COLS 6
#define MAX_FIELD_LENGTH 20 // Ajusta la longitud según tus datos

void readCSV(const char *filename, int data[MAX_ROWS][MAX_COLS], int *rows, int *cols);

#endif // DATA_H_INCLUDED
