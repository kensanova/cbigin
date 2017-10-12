#include <stdio.h>
#include <stdlib.h>  // rand, srand
#include <ctype.h>  // isdigit
#include <time.h>  // time

int main() {
  
  int iRandomNum = 0;
  char cResponse = '\0';  // a char initialization with the null string
  
  srand(time(NULL));
  
  iRandomNum = (rand() % 10) + 1;  // 1 ~ 10

/* Get an integer number between 1 and 10 from user */
  printf("\nGuess a number between 1 and 10: ");
  scanf("%c", &cResponse);
  
/*
* THE REASON FOR USING "%c" WITH AN INTEGER INPUT
*
*   int isdigit(int c);
*     c: the CHARACTER to be checked
*
*   Internally, the character is converted to its ASCII value.
*   The function returns NON-ZERO value if c is a DIGIT.
*   Otherwise, it returns 0.
*/
  if (isdigit(cResponse)) {  // Digit
    if (iRandomNum ==  cResponse) {
      printf("\nYou guessed right.");  // Right
    } else {  // Wrong
      printf("\nYou guessed wrong.\n");
      printf("The correct number is %d.", iRandomNum);
    }
  } else {  // Non-digit
    printf("\nYou did not enter a digit!");
  }
  
  return 0;
}