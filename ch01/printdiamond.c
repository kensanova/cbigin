#include <stdio.h>

/* Print a star at a given position
* ex) printStarts(3) ==> "     *  "
*/
void printStars(int num) {
  
  char cStar[] = " *";
  char cSpace[] = "  ";
  int i;
  
  if (num > 0) {
    for (i = 1; i <= 4; i++) {
      if (i == num) {
        printf("%s", cStar);
      } else {
        printf("%s", cSpace);
      }
    }
  }
}

int main() {
  
  int k, m;
  
  /* Print the first 4 lines */    
  for (k = 4; k > 0; k--) {
    printStars(k);
    printStars(4 - k);
    printf("\n");
  }
  
  /* Print the last 3 lines */    
  for (m = 0; m < 3; m++) {
    printStars(m + 2);
    printStars(2 - m);
    printf("\n");
  }
  
  return 0;
}