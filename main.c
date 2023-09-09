// This program reads a line of data using pointers

#include <stdio.h>

// Declare Functions
void readLine (char *);

int main(void) {

  int i;
  char line[81];

  for ( i = 0; i < 3; i++) {
    printf ("Enter line to read: ");
    readLine (line);
    printf ("%s\n\n", line);
  }
  
  return 0;
}

// Define Functions
void readLine (char *buffer) {
  char character;
  int i = 0;

  do {
    character = getchar ();
    *(buffer + i) = character;
    i++;
  } while (character != '\n');

  *(buffer + i - 1) = '\0';
}