// Week32DArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char TDArray[5][7] = {
		{ ' ','/','\\','_','/','\\',' ' },{ '/',' ','D',' ', 'D',' ','\\' },
		{ '(','=','=','O','=','=',')' },{ '\\',' ',' ','~', ' ',' ','/' },
		{ ' ','-','-','-', '-','-',' ' } };

	int row, col;
	for (row = 0; row < 5; row++)
	{
		for (col = 0; col < 7; col++)
		{
			cout << TDArray[row][col];
		}
		cout << endl;
	}


	// finish – display TD array to console
	return 0;
}


