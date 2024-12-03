#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#ifndef HISTORIA_HISTERIA_H
#define HISTORIA_HISTERIA_H

typedef struct {
  int* left;
  int* right;
  int size;
} HistoriaHisteriaInput;

HistoriaHisteriaInput get_input(char* filename);
int distance(HistoriaHisteriaInput input);
void clean(HistoriaHisteriaInput input);

#endif