#include <iostream>
#include <iomanip>
#include<string>

using namespace std;

const int ROW = 18;
const int COLUMN = 18;

int FillMatrix(int matrix[ROW][COLUMN], int ROW, int COLUMN)
{
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COLUMN; j++) {
			matrix[i][j] = rand() % 27 - 13;
		}
	}
	return matrix[ROW][COLUMN];

}

void PrintMatrix(int matrix[ROW][COLUMN], int ROW, int COLUMN)
{
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COLUMN; j++) {
			cout << setw(3) << matrix[i][j] << ' ';
		}
		cout << endl;
	}
}

int main()
{
	int matrix[ROW][COLUMN] = {};
	FillMatrix(matrix, ROW, COLUMN);
	PrintMatrix(matrix, ROW, COLUMN);
	return 0;
}