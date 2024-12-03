#include "historia_histeria.h"

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

int distance(HistoriaHisteriaInput input) {
  int* left = input.left;
  int* right = input.right;
  int value = 0;
  
  for (int i=0; i<input.size; i++) {
    int diff = abs(input.left[i] - input.right[i]);
    value += diff;
  }

  return value;
}

void clean(HistoriaHisteriaInput input) {
  free(input.left);
  free(input.right);
}