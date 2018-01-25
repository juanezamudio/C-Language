/**
 * This program attempts to solve strings.solution
 * @return 6 ints that give us our solution:
 * Cecil Sagehen
 * 3.14...
 *
 * Juan Zamudio
 * Rosario Huamani Carpio
 * 1/24/17
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_INTS 6

char first_line[14] = "Cecil Sagehen";
char buffer[14];
int int_array[4];

double second_line;
char *char_pointer = NULL;
double *doub_char_pointer = NULL;

int main() {
  
  for (int i = 0; i < 14; i++) {
    char *char_pointer = &first_line[i];

    printf("%c\t%d\t%x\t", *char_pointer, *char_pointer, *char_pointer);
    printf("\n");
  }

  for (int i = 14, j = 0; i > 0; i-=4, j++) {
    char *char_pointer = &first_line[i];

    int_array[j] = printf("%x", *char_pointer);
  }

  printf("\n");
  return 0;
}
