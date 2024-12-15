
#include <iostream>
#include <iomanip>

using namespace std;


void PrintMatrix(short Arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf(" %0*d\t", 2, Arr[i][j]);
		}
		cout << "\n";
	}
}

short CountNumberInMatrix(short Arr1[3][3], short Rows, short Cols, short Number)
{
	short Counter = 0;

	for (short i = 0; i < Rows; i++)
	{

		for (short j = 0; j < Cols; j++)
		{

			if (Arr1[i][j] == Number)
			{
				Counter++;
			}

		}

	}

	return Counter;

}

bool IsMatrixSparse(short Arr1[3][3], short Rows, short Cols)
{
	
	short MatixSize = Rows * Cols;

	return(CountNumberInMatrix(Arr1 , 3 , 3 , 0) >= (MatixSize / 2));
	
}


int main()
{

	srand((unsigned)time(NULL));


	short Arr1[3][3] = { {12,11,10} , {5,0,0} , {0,0,0} };


	cout << "\n 3x3 matrix:\n";
	PrintMatrix(Arr1, 3, 3);

	if (IsMatrixSparse(Arr1 , 3 , 3))
		cout << "\n Yes: Matrix is sparse\n";
	else
		cout << "\n No: Matrix is not sparse\n";
	

	return 0;
}