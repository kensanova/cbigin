#include <stdio.h>

int main() {
  
  int iNum1 = 0;
  int iNum2 = 0;
  
  printf("Enter first integer: ");
  scanf("%d", &iNum1);  // &: address of operator
  printf("Enter second integer: ");
  scanf("%d", &iNum2);
  printf("The result is %d\n", iNum1 + iNum2);
  
  return 0;
}