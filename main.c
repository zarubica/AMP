#include<stdio.h>

void BuildSudoku(int sud[9][9]);
int IsCorrectNumbers(int sud[9][9]);
int IsCorrectColumn(int sud[9][9]);
int IsCorrectRow(int sud[9][9]);
int IsCorrectSubSudoku(int sud[9][9]);
int IsCorrect(int sud[9][9]);

void main() {
	int **sudoku[9][9];

	BuildSudoku(sudoku);
	
	if (IsCorrect(sudoku)) printf("Sudoku je dobar\n");
	else printf("Sudoku nije dobar\n");
}

void BuildSudoku(int sud[9][9]) {

	/**********************************************************************************************************************************************/
	sud[0][0] = 8; sud[0][1] = 3; sud[0][2] = 5; /**/ sud[0][3] = 4; sud[0][4] = 1; sud[0][5] = 6; /**/ sud[0][6] = 9; sud[0][7] = 2; sud[0][8] = 7;

	sud[1][0] = 2; sud[1][1] = 9; sud[1][2] = 6; /**/ sud[1][3] = 8; sud[1][4] = 5; sud[1][5] = 7; /**/ sud[1][6] = 4; sud[1][7] = 3; sud[1][8] = 1;

	sud[2][0] = 4; sud[2][1] = 1; sud[2][2] = 7; /**/ sud[2][3] = 2; sud[2][4] = 9; sud[2][5] = 3; /**/ sud[2][6] = 6; sud[2][7] = 5; sud[2][8] = 8;
	/**********************************************************************************************************************************************/
	sud[3][0] = 5; sud[3][1] = 6; sud[3][2] = 9; /**/ sud[3][3] = 1; sud[3][4] = 3; sud[3][5] = 4; /**/ sud[3][6] = 7; sud[3][7] = 8; sud[3][8] = 2;

	sud[4][0] = 1; sud[4][1] = 2; sud[4][2] = 3; /**/ sud[4][3] = 6; sud[4][4] = 7; sud[4][5] = 8; /**/ sud[4][6] = 5; sud[4][7] = 4; sud[4][8] = 9;

	sud[5][0] = 7; sud[5][1] = 4; sud[5][2] = 8; /**/ sud[5][3] = 5; sud[5][4] = 2; sud[5][5] = 9; /**/ sud[5][6] = 1; sud[5][7] = 6; sud[5][8] = 3;
	/**********************************************************************************************************************************************/
	sud[6][0] = 6; sud[6][1] = 5; sud[6][2] = 2; /**/ sud[6][3] = 7; sud[6][4] = 8; sud[6][5] = 1; /**/ sud[6][6] = 3; sud[6][7] = 9; sud[6][8] = 4;

	sud[7][0] = 9; sud[7][1] = 8; sud[7][2] = 1; /**/ sud[7][3] = 3; sud[7][4] = 4; sud[7][5] = 5; /**/ sud[7][6] = 2; sud[7][7] = 7; sud[7][8] = 6;

	sud[8][0] = 3; sud[8][1] = 7; sud[8][2] = 4; /**/ sud[8][3] = 9; sud[8][4] = 6; sud[8][5] = 2; /**/ sud[8][6] = 8; sud[8][7] = 1; sud[8][8] = 5;
	/**********************************************************************************************************************************************/

}

int IsCorrectNumbers(int sud[9][9]) {
	int i, j;

	for (i = 0; i < 9; i++) 
		for (j = 0; j < 9; j++) 
			if ((sud[i][j] < 1) || (sud[i][j]>9)) return 0;

	return 1;
}

int IsCorrectColumn(int sud[9][9]) {
	int line[9];
	int i, j;
	
	for (i = 0; i < 9; i++) {

		for (j = 0; j < 9; j++) line[j] = 0;
	
		for (j = 0; j < 9; j++) line[sud[i][j] - 1] = 1;
		
		for (j = 0; j < 9; j++) if (line[j] == 0) return 0; 
		
	}

	return 1;
}

int IsCorrectRow(int sud[9][9]) {
	int line[9];
	int i, j;

	for (i = 0; i < 9; i++) {

		for (j = 0; j < 9; j++) line[j] = 0;

		for (j = 0; j < 9; j++) line[sud[j][i] - 1] = 1;

		for (j = 0; j < 9; j++) if (line[j] == 0) return 0;

	}

	return 1;
}

int IsCorrectSubSudoku(int sud[9][9]) {
	int line[9];
	int i, j;

	for (i = 0; i < 9; i++) {

		for (j = 0; j < 9; j++) line[j] = 0;

		for (j = 0; j < 9; j++) line[sud[((int)(i / 3)) * 3 + j / 3][j % 3] - 1] = 1;

		for (j = 0; j < 9; j++) if (line[j] == 0) return 0;

	}

	return 1;
}

int IsCorrect(int sud[9][9]) {
	
	if (!IsCorrectNumbers(sud)) return 0;

	if (!IsCorrectColumn(sud)) return 0;
	
	if (!IsCorrectRow(sud)) return 0;
	
	if (!IsCorrectSubSudoku(sud)) return 0;
	
	return 1;	
}
