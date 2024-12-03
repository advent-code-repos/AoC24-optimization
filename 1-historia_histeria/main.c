#include <stdio.h>
#include <stdlib.h>
#include "historia_histeria.h"

char* FILENAME = "./inputs/input.example";

int main(void) {
  printf("Hi optimization!\n\n");

  HistoriaHisteriaInput input = get_input(FILENAME);

  int* left = input.left;
  int* right = input.right;
  
  printf("Left Array:\n");
  for (int i=0; i<input.size; i++) {
    printf("%d\n", left[i]);
  }

  printf("Right Array:\n");
  for (int i=0; i<input.size; i++) {
    printf("%d\n", right[i]);
  }
  
  free(input.left);
  free(input.right);

  printf("\n");
}