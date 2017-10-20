#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/******************************
* FUNCTION PROTOTYPES
******************************/
int sportsQuestion(void);
int geographyQuestion(void);
int computerQuestion(void);
void pause(int);
/*****************************/

/******************************
* GLOBAL VARIABLE
******************************/
int giResponse = 0;
int giTotalTry = 0;
int giCorrect = 0;
/*****************************/

int main() {
  
  do {
    
    system("clear");
    printf("\n\tTHE TRIVIA GAME\n\n");
    printf("\t1. Sports\n");
    printf("\t2. Geography\n");
    printf("\t3. Computer\n");
    printf("\t4. Quit\n");
    printf("\n\nEnter your selection: ");
    scanf("%d", &giResponse);
    
    switch(giResponse) {
      
      case 1:
      
        if (sportsQuestion() == 4) {
          printf("\nCorrect!\n");
          giCorrect++;
          giTotalTry++;
        } else {
          printf("\nIncorrect!\n");
          giTotalTry++;
        }
        
        pause(2);
        break;
        
      case 2:
      
        if (geographyQuestion() == 2) {
          printf("\nCorrect!\n");
          giCorrect++;
          giTotalTry++;
        } else {
          printf("\nIncorrect!\n");
          giTotalTry++;
        }
        
        pause(2);
        break;
        
      case 3:
      
        if (computerQuestion() == 3) {
          printf("\nCorrect!\n");
          giCorrect++;
          giTotalTry++;
        } else {
          printf("\nIncorrect!\n");
          giTotalTry++;
        }
        
        pause(2);
        break;
        
    }  // end switch
    
  } while(giResponse != 4);
  
  printf("\nTotal try: %d\n", giTotalTry);
  printf("\nCorrect Answers: %d\n", giCorrect);
  printf("\nIncorrect Answers: %d\n", giTotalTry - giCorrect);
  
}  // end main function

/******************************
 * FUNCTION DEFINITION
 *****************************/
int sportsQuestion(void) {
  
  int iAnswer = 0;
  
  system("clear");
  printf("\tSports Question\n");
  printf("\nWhat University did NFL star Deon Sanders attend? ");
  printf("\n\n\t1. University of Miami\n");
  printf("\t2. California State University\n");
  printf("\t3. Indiana University\n");
  printf("\t4. Florida State University\n");
  printf("\nEnter your selection: ");
  scanf("%d", &iAnswer);
  
  return iAnswer;
  
}  // end sportsQustion funtion

/******************************
 * FUNCTION DEFINITION
 *****************************/
int geographyQuestion(void) {
  
  int iAnswer = 0;
  
  system("clear");
  printf("\tGeography Question\n");
  printf("\nWhat is the state capitol of Florida? ");
  printf("\n\n\t1. Pensecola\n");
  printf("\t2. Tallahassee\n");
  printf("\t3. Jacksonville\n");
  printf("\t4. Miami\n");
  printf("\nEnter your selection: ");
  scanf("%d", &iAnswer);
  
  return iAnswer;
  
}  // end geographyQustion function

/******************************
 * FUNCTION DEFINITION
 *****************************/
int computerQuestion(void) {
  
  int iAnswer = 0;
  
  system("clear");
  printf("\tComputer Question\n");
  printf("\nWhich one is not a programming language? ");
  printf("\n\n\t1. C\n");
  printf("\t2. F\n");
  printf("\t3. V\n");
  printf("\t4. R\n");
  printf("\nEnter your selection: ");
  scanf("%d", &iAnswer);
  
  return iAnswer;
  
}  // end computerQustion function

/******************************
 * FUNCTION DEFINITION
 *****************************/
void pause(int iNum) {
  
  int iCurrentTime = 0;
  int iElapsedTime = 0;
  
  iCurrentTime = time(NULL);
  
  do {
    
    iElapsedTime = time(NULL);
    
  } while((iElapsedTime -  iCurrentTime) < iNum);
  
}  // end pause function