#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int main() {
    
  int iHowMany = 0;
  int iRand1 = 0;
  int iRand2 = 0;
  int iAnswer = 0;
  int iCorrect = 0;
  srand(time(NULL));
  
  printf("\nHow many games would you like to play: ");
  scanf("%d", &iHowMany);
  
  int i;
  for (i = 0; i < iHowMany; i++) {
    iRand1 = rand() % 100;
    iRand2 = rand() % 100;
    printf("\nWhat's the result of %d + %d: ", iRand1, iRand2);
    scanf("%d", &iAnswer);
    if (iAnswer == iRand1 + iRand2) {
      printf("That's correct.\n");
      iCorrect++;
    } else {
      printf("Sorry, wrong answer.\n");
    }
  }
  
  printf("\nYou've got %d correct answers.", iCorrect);
  
  return 0;
}