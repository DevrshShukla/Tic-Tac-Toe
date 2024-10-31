#include <stdio.h>
#include <stdlib.h>

char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int choice, player;

int checkForWin();
void displayBoard();
void markBoard(char mark);
void rules();
void tital();

int main()
{
    int gameStatus;
    char mark;
    int choz,exit;
    
    player = 1;
    tital();
    printf("\n\n ==> 1 : Play Game \n ==> 2 : Exit\n\n");
    scanf("%d",&choz);

    if(choz==1){
        rules();
        printf("\n\n\n--------------------------------------------->  W E L C O M E  <---------------------------------------------\n\n\n\n");
    }

    else if(choz == 2){
        printf("\n\n\n Thank you ! \n\n\n");
        goto label;
    }
    
    do{
        displayBoard();
        //change turns
        player = (player % 2)?1:2;

        //Get Input
        printf("\n\nPlayer %d,enter a number: ",player);
        scanf("%d",&choice);
        //set the correct character based on player turn
        mark = (player==1)?'X':'O';
        //set board based on user choice or invalid choice
        markBoard(mark);
        gameStatus = checkForWin();
        player ++;

    }while(gameStatus == -1);

    if(gameStatus == 1) //player = 2
        printf("\n\n==>Player %d win \n\n",--player);
    else{
        printf("\n\n==>Game draw\n\n");
    }

    

    label:

     
    return 0;
}
/*
Function to return game status
1 for game is over with result
-1 for game is in progress
0 game is over and no result
*/
int checkForWin()
{
    int returnValue = 0;

    if (square[1] == square[2] && square[2] == square[3])
    {
        returnValue = 1;
    }
    else if (square[4] == square[5] && square[5] == square[6])
        returnValue = 1;

    else if (square[7] == square[8] && square[8] == square[9])
        returnValue = 1;

    else if (square[1] == square[4] && square[4] == square[7])
        returnValue = 1;

    else if (square[2] == square[5] && square[5] == square[8])
        returnValue = 1;

    else if (square[3] == square[6] && square[6] == square[9])
        returnValue = 1;

    else if (square[1] == square[5] && square[5] == square[9])
        returnValue = 1;

    else if (square[3] == square[5] && square[5] == square[7])
        returnValue = 1;

    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7]
        != '7' && square[8] != '8' && square[9] != '9')
        returnValue = 0;
    else
        returnValue = -1;

    return returnValue;
}

/*
Function to draw board of Tic Tac Toe with players mark
*/
void displayBoard()
{
   

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");

    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("     |     |     \n\n");
}

/*
Set the board with the correct character,
X or O in the correct spot in the array
*/
void markBoard(char mark)
{
    if (choice == 1 && square[1] == '1')
        square[1] = mark;

    else if (choice == 2 && square[2] == '2')
        square[2] = mark;

    else if (choice == 3 && square[3] == '3')
        square[3] = mark;

    else if (choice == 4 && square[4] == '4')
        square[4] = mark;

    else if (choice == 5 && square[5] == '5')
        square[5] = mark;

    else if (choice == 6 && square[6] == '6')
        square[6] = mark;

    else if (choice == 7 && square[7] == '7')
        square[7] = mark;
    else if (choice == 8 && square[8] == '8')
        square[8] = mark;

    else if (choice == 9 && square[9] == '9')
        square[9] = mark;
    else
    {
        printf("Invalid move ");

        player--;
}
}


// This Function Is For Rules
void rules(){
         printf("\n\n\n--------------------------------------------->  R U L E S  <---------------------------------------------\n\n\n\n");


        printf("\n\n\n== >The game is played on a 3x3 grid\n\n");
        printf("== >Each player is assigned a symbol, typically X or O\n\n");
        printf("== >The grid starts empty.\n\n");
        printf("== >The game is won by the first player to get three of their symbols in a row.\n\n");
        printf("== >The winning line can be horizontal, vertical, or diagonal.\n\n");
        printf("== >If the entire grid is filled and no player has three of their symbols in a row, the game is a draw or a tie.\n\n");
        printf("== >The game ends when one player wins or when it is a draw\n\n");

}


// This Function Is For Print Titale
void tital(){

    
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------\n\n\n");
    printf("                                                            TIC - TAC - TOE\n\n\n");
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------\n\n\n");

}