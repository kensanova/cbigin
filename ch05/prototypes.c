#include <stdio.h>

int getRemainder(int, int);
int getLargest(int, int);
void printMenu(void);

int main() {
  
  printf("\nThe remainder of %d %% %d is: %d\n", 15, 6, getRemainder(15, 6));
  
  if (getLargest(99, 109 != 0)) {
    
    printf("\nThe largest number is: %d\n", getLargest(99, 109));
    
  }
  
  printMenu();
  
    
}  // end main function

int getRemainder(int iNum1, int iNum2) {
    
  return iNum1 % iNum2;
    
}  // end getRemainder funtion

int getLargest(int iNum1, int iNum2) {
  
  if (iNum1 > iNum2) {
    return iNum1;
  } else if (iNum1 < iNum2) {
    return iNum2;
  } else {
    printf("\nThe two numbers are equal.\n");
    return 0;
  }
  
}  // end getLargest funtion

void printMenu() {
  
  printf("\n>>> Welcome to Big One Bank <<<\n\n");
  printf("\t1. Dispaly balance\n");
  printf("\t2. Deposit funds\n");
  printf("\t3. Transfer funds\n");
  printf("\t4. Withdraw funds\n");
  
}  // end printMenu function