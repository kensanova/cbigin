#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int main() {
  int iDiceOne, iDiceTwo;
  int iSum;
  srand(time(NULL));
  
  printf("\n>>> Play Two-Dice Game <<<\n\n");

/*
* Generate a random number (1 ~ 6) twice
* simulating two-dice roll.
*/
  iDiceOne = rand() % 6 + 1;
  printf("Roll Dice One: %d\n", iDiceOne);
  iDiceTwo = rand() % 6 + 1;
  printf("Roll Dice Two: %d\n", iDiceTwo);
  
/* Check who wins */
  iSum = iDiceOne + iDiceTwo;
  if ((iSum == 7) || (iSum == 11)) {
    printf("\nYou win!");
  } else {
    printf("\nYou lose! Thank you for playing.");
  }
  
  return 0;
}