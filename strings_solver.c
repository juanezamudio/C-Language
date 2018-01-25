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
// char *pointer_first;
//
// char *pointer_first = &first_line[0];
//
// char *pointer_second = &first_line[1];
char *pointer;

int main() {
  // *char_pointer = (char *)malloc(sizeof(first_line));

  for (int i = 0; i < 14; i++) {
    char *pointer = &first_line[i];

    printf("%d\n", *pointer);
    printf("%c", *pointer);
  }
  printf("\n");
  return 0;
}
