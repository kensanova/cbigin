#include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <time.h>

int main() {
  
  int x;
  char cArray[5];
  char cName[] = "Olivia";
  
  printf("\nCharacter array not initialized:");
  
  for (x = 0; x < sizeof(cArray); x++) {
    printf("\nElement %d's content: %c", x, cArray[x]);
  }
  
  printf("\n\nCharacter array initialized:");
  
  for (x = 0; x < sizeof(cName) - 1; x++) {
    printf("\nElement %d's content: %c", x, cName[x]);
  }
  
}