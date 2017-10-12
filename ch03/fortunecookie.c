#include <stdio.h>
#include <stdlib.h>  // rand, srand
#include <time.h>  // time

int main() {
  
  int iRandomNum = 0;
  int i;
  
  srand(time(NULL));  // Generate true random numbers
  
  iRandomNum = (rand() % 4) + 1;  // 1 ~ 4
  
  printf("\nFortune Cookie: ");
  
  switch (iRandomNum) {
    case 1:
      printf("You will meet a new friend today.\n");
      break;
    case 2:
      printf("You will enjoy a long and happy life.\n");
      break;
    case 3:
      printf("Opportunity knocks softly. Can you hear it?\n");
      break;
    case 4:
      printf("You'll be financially rewarded for your good deeds.\n");
      break;
  }  // end switch
  
  printf("\nLucky lotto numbers: ");
  
/* Print 5 lotto numbers */
  for (i = 0; i < 5; i++) {
    printf("%d ", (rand() % 47) + 1);
  }
  
/* Print the Mega number */
  printf("\nMega number: %d", (rand() % 27) + 1);
      
  return 0;
}