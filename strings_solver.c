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
#include <math.h>

#define MAX_INTS 6

char first_line[14] = "Cecil Sagehen";
double second_line = M_PI;
char *char_pointer = NULL;
double *double_pointer = NULL;

int main() {
  char str[4] = "";
  char acc[4] = "";

  long int number;
  char *eptr;

  int counter = 0;

  for (int i = 0; i < 14; i++) {
    char *pointer = &first_line[i];
    // sprintf(acc, "%x", *pointer);
    sprintf(acc, "%x", *pointer);
    if (counter < 4 ) {
      // printf("Counter %d\n", counter);
      // strcat(str,acc);
      strcat(acc,str);
      strcpy(str,acc);
      counter++;
      // printf("Acc %s\n",acc );
      // printf("Str %s\n",str );
    } else {
      printf("%s\n",str);
      number = strtol(str,&eptr, 16);
      printf("Digit %d\n", number);

      counter = 1;
      str[0] = '\0';
      strcat(acc, str);
      strcpy(str,acc);
    }
    printf("%c\t%d\t%x\n", *pointer, *pointer, *pointer);
  }

  double_pointer = &second_line;

  printf("%d\t%x\t%f\n", double_pointer, double_pointer, double_pointer);
  // printf("String %s\n",str );
  number = strtol(str,&eptr, 16);
  printf("%d\n", number);

  return 0;
}
