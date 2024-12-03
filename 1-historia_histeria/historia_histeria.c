#include "historia_histeria.h"
#include <stdlib.h>
#include <stdio.h>

#define MAX_LINES 1000
#define MAX_VALUES 2

HistoriaHisteriaInput get_input(char* filename) {
  FILE *file = fopen(filename, "r");
  
  int right_value, left_value, index = 0;
  int* left = malloc(MAX_LINES * sizeof(int));
  int* right = malloc(MAX_LINES * sizeof(int));

  while(fscanf(file, "%d %d", &left_value, &right_value) == MAX_VALUES && index < MAX_LINES){
    left[index] =left_value; 
    right[index] =right_value; 
    index++;
  }

  fclose(file);

  return (HistoriaHisteriaInput){left, right, index};
}