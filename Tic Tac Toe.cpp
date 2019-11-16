#include <iostream>
using namespace std;
// Where to put the X's and O's 
char sqaure[10] = { 'o', '1', '2', '3', '4', '5', '6', '7','8','9' };
// Functions to make the board and check for a winner
int checkwin();
void board();
// where the magic is gonna happen
int main()
{

	int player = 1, i, choice;

	char mark;
	do
	{
		//The Tic-Tac-Toe board
		board();
		//Making the players
		player = (player % 2) ? 1 : 2;
		cout << "Player " << player << ", enter a number: ";
		//selecting your spot
		cin >> choice;
		//making the marks for the players
		mark = (player == 1) ? 'X' : 'O';
		//Making Input
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
		else if (choice == 7 && sqaure[7] == '7')
			square[7] = mark;
		else if (choice == 8 && square[8] == '8')
			square[8] = mark;
		else if (choice == 9 && square[9] == '9')
			square[9] = mark;
		else
		{
			cout << "No, try again: ";
			//ignores the input command
			player--;
			cin.ignore();
			cin.get();
		}
		//Checking for win. Need to add loop
		i = checkwin();
		
		player++;
		
	} while (i == -1);
	
	board();
	// Returning the win
	if (i == 1)
		cout << "==>\aPlayer " << --player << " win ";
	//Return the Tie
	else
		cout << "==>\aGame draw";
	cin.ignore();
	cin.get();
	return 0;
}
	// Checking win
int checkwin()
 {
	if (square[1] == square[2] && square[2] == square[3])
		return 1;
	else if (square[4] == square[5] && square[5] == square[6])
		return 1;
	else if (square[7] == square[8] && square[8] == square[9])
		return 1;
	else if (square[1] == square[4] && square[4] == square[7])
		return 1;
	else if (square[2] == square[5] && square[5] == square[8])
		return 1;
	else if (square[3] == square[6] && square[6] == square[9])
		return 1;
	else if (square[1] == square[5] && square[5] == square[9])
		return 1;
	else if (square[3] == square[5] && square[5] == square[7])
		return 1;
	//Checking for Tie
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
		&& square[4] != '4' && sqaure[5] != '5') && square[6] != '6'
		&& square[7] != '7' && square[8] != '8' && square[9] != '9')
		return 0;
	else
		return -1;
}
// Making the Board
void board()
{
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";
	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

	cout << "     |     |     " << endl << endl;
}
