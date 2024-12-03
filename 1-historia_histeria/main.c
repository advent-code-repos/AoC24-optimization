#include <stdio.h>
#include <stdlib.h>
#include "historia_histeria.h"

char* FILENAME = "./inputs/input";

int main(void) {
  printf("HISTORIA-HISTERIA - optimization!\n");

  HistoriaHisteriaInput input = get_input(FILENAME);
  int distance_value = distance(input);

  printf("Distance value: %d", distance_value);

  clean(input);

  printf("\n");
}
