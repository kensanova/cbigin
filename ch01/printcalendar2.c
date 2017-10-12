#include <stdio.h>

int main() {
/*
* Option 2. Using an array of pointers that point to strings
*/
  const char *DAYS[] = {
    "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"
  };
    
/* Print the year and the month */    
  printf("\t\t   %s\n", "2017 October");

/* Print days header */
  int i;
  
  for (i = 0; i < 7; i++) {
    printf("%s\t", DAYS[i]);
  }
    printf("\n");
    
/* Print days */
  for (i = 1; i <= 31; i++) {
    if (i % 7 == 0)
      printf("%3d\t\n", i);
    else
      printf("%3d\t", i);
    }
    
  return 0;
}