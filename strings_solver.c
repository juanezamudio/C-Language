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
double second_line;
int *char_pointer = NULL;

char_pointer = &first_line[0];

int main() {
  // *char_pointer = (char *)malloc(sizeof(first_line));

  // for (int i = 0; i < ; i++)
    printf("%d\n", *char_pointer);
  
  return 0;
}
