#include <stdio.h>
#include <stdlib.h>

void displayMenu();
void ascendingSort(int[]);
void descendingSort(int[]);

/******************************
 * main function
 *****************************/
int main() {
  int i;
  int iNum[10];
  int iChoice = 0;

/* Get 10 numbers from user */
  for (i = 0; i < 10; i++) {
    printf("Enter the number %d: ", i + 1);
    scanf("%d", &iNum[i]);
  }

  do {
/* Display menu */
    system("clear");
    displayMenu();
    
/* Choose sort order: ascending or descending */
    printf("\nWhat is your choice? ");
    scanf("%d", &iChoice);
    
    switch (iChoice) {
      case 1:  // Ascending
        ascendingSort(&iNum[0]);
        break;
      case 2:  // Descending
        descendingSort(&iNum[0]);
        break;
      default:
        printf("\nYou must choose either 1 or 2!\n");
    }  // end switch
  } while (iChoice != 1 && iChoice != 2);

/* Display sorted result */  
  for (i = 0; i < 10; i++) {
    printf("\t%d", iNum[i]);
  }
    
  return 0;
}  // end main function

/******************************
 * displayMenu function
 *****************************/
void displayMenu() {
  printf("\nHow would you like to sort the numbers?\n");
  printf("\t1. Ascending\n");
  printf("\t2. Descending\n");
}  // end displayMenu function

/******************************
 * ascendingSort function
 *****************************/
void ascendingSort(int *iNum) {
  int x, y;
  int iTemp = 0;
  
  for (x = 0; x < 9; x++) {
    for (y = 0; y < 9; y++) {
      if (iNum[y] > iNum[y + 1]) {
        iTemp = iNum[y + 1];
        iNum[y + 1] = iNum[y];
        iNum[y] = iTemp;
      }
    }  // end for: y
  }  // end for: x
}  // end descendingSort function

/******************************
 * descendingSort function
 *****************************/
void descendingSort(int *iNum) {
  int x, y;
  int iTemp = 0;
  
  for (x = 0; x < 9; x++) {
    for (y = 0; y < 9; y++) {
      if (iNum[y] < iNum[y + 1]) {
        iTemp = iNum[y];
        iNum[y] = iNum[y + 1];
        iNum[y + 1] = iTemp;
      }
    }  // end for: y
  }  // end for: x
}  // end ascendingSort function