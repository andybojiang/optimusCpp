// sudoku.cpp
#include "cmpt_error.h"
#include <iostream>
using namespace std;

void drawBoard( int board[9][9] );
void editBoard( int board[9][9], int col, int row, int sudoNum );

int main() {

	int board[9][9] = {
		{ 0, 0, 7, 0, 8, 0, 0, 0, 0 },
		{ 4, 0, 0, 0, 0, 0, 0, 2, 0 },
		{ 0, 0, 6, 0, 0, 9, 0, 1, 0 },
		{ 0, 0, 0, 0, 0, 6, 0, 0, 9 },
		{ 5, 7, 0, 0, 0, 0, 0, 0, 8 },
		{ 0, 9, 0, 0, 5, 3, 0, 0, 0 },
		{ 0, 0, 0, 5, 0, 0, 2, 0, 0 },
		{ 2, 0, 0, 9, 0, 0, 0, 7, 0 },
		{ 0, 0, 9, 2, 0, 7, 6, 8, 0 }
	}; // board

	cout << "Welcome to Andy's Sudoku\n";
	drawBoard( board );
	
	int col, row, sudoNum;
	bool complete = false;
	while (!complete) {

		cout << "Enter Col ";
		cin >> col;
		cout << "Enter Row ";
		cin >> row;
		cout << "Enter sudoNum ";
		cin >> sudoNum;

		editBoard( board, col, row, sudoNum );
		drawBoard( board );

	}

	// Take board, col, row, number and add to the board

} // main

void editBoard( int board[9][9], int col, int row, int sudoNum ) {
	board[col][row] = sudoNum;
}

void drawBoard( int board[9][9] ) {

	cout << "\n Andy's Sudoku Solver\n\n";

	for ( int i = 0; i != 9; i++ ) {
		for ( int j = 0; j != 9; j++ ) {
			cout << board [i][j] << " "; 
			if ( j == 2 || j == 5 ) {
				cout << "| ";
			}
		}
		cout << "\n";
		if ( i == 2 || i == 5 ) {
			for ( int k = 0; k != 9; k++ ) {
				cout << "- ";
				if ( k == 2 || k == 5 ) {
					cout << "| ";
				}
			}
			cout << "\n";
		}
	}

	cout << "\n";

} // drawBoard Function 