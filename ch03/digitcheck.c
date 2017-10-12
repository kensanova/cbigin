#include <stdio.h>
#include <ctype.h>  // isdigit

int main() {
    char cResponse = '\0';
    
    // printf("Please enter a letter: ");
    printf("Please enter a digit: ");
    scanf("%c", &cResponse);
    
    /*
    * Even though, isdigit() takes an integer as an argument,
    * a character is passed to the function.
    * Internally, the character is converted to its ASCII value.
    */
    // if (isdigit(cResponse) == 0) // Check for a letter
    if isdigit(cResponse)  // Check for a digit
        printf("Thank you.\n");
    else
        // printf("You did not enter a letter!\n");
        printf("You did not enter a digit!\n");
    
    return 0;
}