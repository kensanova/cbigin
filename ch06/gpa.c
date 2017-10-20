/*********************
 * gpa.c 
 ********************/
#include <stdio.h>
#include <stdlib.h>

/******************************
 * main function
 *****************************/
int main() {
  int x = 0;
  float fGPA[30];
  float fTotal = 0.0;

/* Get GPAs */  
  printf("\nEnter 30 GPAs.\n");
  printf("If you want to see the average at any time, enter 0.\n\n");
  
  do {
    printf("GPA %d: ", x + 1);
    scanf("%f", &fGPA[x]);

/* Do you want to see the average now? */    
    if (fGPA[x] == 0 && x > 0)
      break;
    
    fTotal += fGPA[x];
    x++;
  } while (x < 30);  // end do while loop

/* Print the average */  
  printf("\nGPA Average: %.2f\n", fTotal / x);
  
  return 0;
}  // end main function
