#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum {false, true} bool;

void displayMenu() {
  printf("\n>>> Game of Concentration <<<\n");
  printf("\t1. Easy (remember 3 numbers in 5 seconds)\n");
  printf("\t2. Intermediate (remember 5 numbers in 5 seconds)\n");
  printf("\t3. Difficult (remember 5 numbers in 2 seconds)\n");
  printf("\t4. Quit\n\n");
}

char chooseMenu() {
  char choice = '\0';
  
  printf("\t\tWhat would you like to do? ");
  scanf("%c", &choice);
  return choice;
}

void generateRndNum(int *iNum) {
  int i;
  
  for (i = 0; i < sizeof(iNum); i++) {
    iNum[i] = rand() % 100;
  }
}

void displayNumbers(int num, int *iNum) {
  int i;
  
  printf("\nConcentrate on the next %d numbers\n\n", num);
  
  for (i = 0; i < num; i++) {
    printf("%d\t", iNum[i]);
  }
  
  printf("\n");
}

void clearScreen(int num) {
  int iCurrentTime = 0;
  int iElapsedTime = 0;
  
  iCurrentTime = time(NULL);
      
    do {
      iElapsedTime = time(NULL);
    } while (iElapsedTime - iCurrentTime < num);
      
    system("clear");
}

void getAnswers(int num, int *iAns) {
  int i;
  
  printf("\nEnter each number and hit <ENTER>\n");
  
  for (i = 0; i < num; i++) {
    scanf("%d", &iAns[i]);
  }
}

void checkAnswers(int num, int *iNum, int *iAns) {
  
  switch(num) {
    
    case 3:
    
      if (iNum[0] == iAns[0]
        && iNum[1] == iAns[1]
        && iNum[2] == iAns[2]) {
        printf("\nCongratulations!");
        exit(0);
      } else {
        printf("\nSorry, correct numbers were %d %d %d\n", \
          iNum[0], iNum[1], iNum[2]);
        exit(0);
      }
      break;
      
    case 5:
    
      if (iNum[0] == iAns[0]
        && iNum[1] == iAns[1]
        && iNum[2] == iAns[2]
        && iNum[3] == iAns[3]
        && iNum[4] == iAns[4]) {
        printf("\nCongratulations!");
      } else {
        printf("\nSorry, correct numbers were %d %d %d %d %d\n", \
          iNum[0], iNum[1], iNum[2], iNum[3], iNum[4]);
      }
      break;
  }
}

int main() {
  
  char cChoice = '\0';
  int iNum[5];
  int iAns[5] = {0, 0, 0, 0, 0};
  
  int i = 0;
  srand(time(NULL));

/* Display the menu */
  displayMenu();
/* Get the user's choice */
  cChoice = chooseMenu();
/* Generate five random numbers */
  generateRndNum(&iNum[0]);
/* Display numbers */
  switch(cChoice) {

    case '1':
      displayNumbers(3, &iNum[0]);
      clearScreen(5);
      getAnswers(3, &iAns[0]);
      checkAnswers(3, &iNum[0], &iAns[0]);
      break;
      
    case '2':
      displayNumbers(5, &iNum[0]);
      clearScreen(5);
      getAnswers(5, &iAns[0]);
      checkAnswers(5, &iNum[0], &iAns[0]);
      break;
        
    case '3':
      displayNumbers(5, &iNum[0]);
      clearScreen(2);
      getAnswers(5, &iAns[0]);
      checkAnswers(5, &iNum[0], &iAns[0]);
      break;
    
    case '4':
      printf("\nGoodbye!");
      exit(0);
  }

  return 0;
}