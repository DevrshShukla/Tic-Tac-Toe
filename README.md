
1. Player Choice & Game Start Options:

The program begins by displaying a title screen and offering two options:
1 to play the game.
2 to exit.
Rules Function:

If the player chooses to play, the rules function is called, which explains the rules of the Tic-Tac-Toe game.

2. Game Board Display (displayBoard):

The displayBoard function displays the Tic-Tac-Toe board with the current state of each cell. It updates based on player moves and visually separates rows and columns.
Player Turns & Marking the Board (markBoard):

Players take turns to enter a number (1-9) to place their mark ('X' for Player 1, 'O' for Player 2) in the corresponding cell.
The markBoard function updates the board array (square) based on the player’s choice.
If a player makes an invalid move (chooses an occupied cell), the turn does not advance.

3. Win Check (checkForWin):

The checkForWin function checks if there's a winning line (horizontal, vertical, or diagonal) or if the game is a draw.
Returns 1 if there is a winner.
Returns 0 if the board is full and the game is a draw.
Returns -1 if the game is still ongoing.

4. Game Status:

The game continues in a loop, updating the board after each move, until checkForWin indicates that a player has won or the game is a draw.
If a player wins, a message displays the winning player. If it's a draw, a message indicates that the game ended in a draw.

5. Exit:

When the game concludes or the user chooses to exit, a message thanks the player for playing, and the program terminates.

--> Summary of Functions

main(): Controls the flow of the game.
checkForWin(): Determines if a player has won or if the game is a draw.
displayBoard(): Displays the current game board.
markBoard(char mark): Updates the board with the player's mark ('X' or 'O').
rules(): Displays the game rules.
tital(): Displays the game title screen.
