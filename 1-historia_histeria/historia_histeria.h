#ifndef HISTORIA_HISTERIA_H
#define HISTORIA_HISTERIA_H

typedef struct {
  int* left;
  int* right;
  int size;
} HistoriaHisteriaInput;

HistoriaHisteriaInput get_input(char* filename);

#endif