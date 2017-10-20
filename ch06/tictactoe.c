#include <stdio.h>
#include <stdlib.h>

/***************************
 * function prototypes
 * ************************/
void displayBorad();
int verifySelection(int, int);
void checkForWin();

/***************************
 * global variables
 * ************************/
char board[8];
char cWhoWon = ' ';
int iCurrentPlayer = 0;

/***************************
 * begin main function
 * ************************/
int main() {
    
  int x;
  int iSquareNum = 0;
  
  for (x = 0; x <= sizeof(board); x++)
    board[x] = ' ';
    
  displayBorad();
  
  while (cWhoWon == ' ') {
    
    printf("\n%c\n", cWhoWon);
    
    if (iCurrentPlayer == 1 || iCurrentPlayer == 0) {
      
      printf("\nPLAYER X\n");
      printf("Enter an available square number (1-9): ");
      scanf("%d", &iSquareNum);
      
      if (verifySelection(iSquareNum, iCurrentPlayer) == 1) {
        iCurrentPlayer = 1;
      } else { 
        iCurrentPlayer = 2;
      }  // end inner if
      
        
    } else {
      
      printf("\nPLAYER O\n");
      printf("Enter an available square number (1-9): ");
      scanf("%d", &iSquareNum);
      
      if (verifySelection(iSquareNum, iCurrentPlayer) == 1) {
        iCurrentPlayer = 2;
      } else {
        iCurrentPlayer = 1;
      }  // end inner if
      
    }  // end outer if
    
    displayBorad();
    checkForWin();
    
  }  // end while loop
    
    return 0;
    
}  // end main function

/********************************
 * begin function definition
 * *****************************/
void displayBorad() {
   
  system("clear");
  printf("\n\t|\t|\n");
  printf("\t|\t|\n");
  printf("%c\t|%c\t|%c\n", board[0], board[1], board[2]);
  printf("--------|-------|--------\n");
  printf("\t|\t|\n");
  printf("%c\t|%c\t|%c\n", board[3], board[4], board[5]);
  printf("--------|-------|--------\n");
  printf("\t|\t|\n");
  printf("%c\t|%c\t|%c\n", board[6], board[7], board[8]);
  printf("\t|\t|\n");
 }  // end function definition
 
/********************************
 * begin function definition
 * *****************************/
int verifySelection(int iSquare, int iPlayer) {
  
  if (board[iSquare - 1] == ' ' && (iPlayer == 1 || iPlayer == 0)) {
    board[iSquare - 1] = 'X';
    return 0;
  } else if (board[iSquare - 1] == ' ' && iPlayer == 2) {
    board[iSquare - 1] = 'O';
    return 0;
  } else
    return 1;
  
}  // end function definition

/********************************
 * begin function definition
 * *****************************/
void checkForWin() {
  
  int catTotal;
  int x;
  
  if (board[0] == 'X' && board[1] == 'X' && board[2] == 'X')
    cWhoWon = 'X';
  else if (board[3] == 'X' && board[4] == 'X' && board[5] == 'X')
    cWhoWon = 'X';
  else if (board[6] == 'X' && board[7] == 'X' && board[8] == 'X')
    cWhoWon = 'X';
  else if (board[0] == 'X' && board[3] == 'X' && board[6] == 'X')
    cWhoWon = 'X';
  else if (board[1] == 'X' && board[4] == 'X' && board[7] == 'X')
    cWhoWon = 'X';
  else if (board[2] == 'X' && board[5] == 'X' && board[8] == 'X')
    cWhoWon = 'X';
  else if (board[0] == 'X' && board[5] == 'X' && board[8] == 'X')
    cWhoWon = 'X';
  else if (board[2] == 'X' && board[5] == 'X' && board[6] == 'X')
    cWhoWon = 'X';
  else if (board[0] == 'O' && board[1] == 'O' && board[2] == 'O')
    cWhoWon = 'O';
  else if (board[3] == 'O' && board[4] == 'O' && board[5] == 'O')
    cWhoWon = 'O';
  else if (board[6] == 'O' && board[7] == 'O' && board[8] == 'O')
    cWhoWon = 'O';
  else if (board[0] == 'O' && board[3] == 'O' && board[7] == 'O')
    cWhoWon = 'O';
  else if (board[1] == 'O' && board[4] == 'O' && board[7] == 'O')
    cWhoWon = 'O';
  else if (board[2] == 'O' && board[5] == 'O' && board[8] == 'O')
    cWhoWon = 'O';
  else if (board[0] == 'O' && board[5] == 'O' && board[8] == 'O')
    cWhoWon = 'O';
  else if (board[2] == 'O' && board[5] == 'O' && board[6] == 'O')
    cWhoWon = 'O';
    
  if (cWhoWon == 'X')   {
    printf("\nX Wins!\n");
    return;
  }
  
  if (cWhoWon == 'O')   {
    printf("\nO Wins!\n");
    return;
  }
  
  // Check for CAT / draw game
  for (x = 0; x <= sizeof(board); x++) {
    if (board[x] != ' ')
      catTotal++;
  }  // end for loop
  
  if (catTotal == 9) {
    cWhoWon = 'C';
    printf("\nCAT Game!\n");
    return;
  }  // end if
    
}  // end function definition