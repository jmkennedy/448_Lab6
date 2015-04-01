#include "checkMatrix.cpp"
#include "matrixAdd.cpp"
#include "matrixMult.cpp"
#include "matrixSize.cpp"
#include "reader.cpp"
#include "matrixTrans.cpp"

#include <vector>
#include <iostream>

using namespace std;

void PrintMatrix (vector<vector<int> > m);

int main()
{
	vector<vector<int> > matrixAdd1;
	vector<vector<int> > matrixAdd2;
	vector<vector<int> > matrixMult1;
	vector<vector<int> > matrixMult2;
	vector<vector<int> > matrixTrans1;
	
	if(ReadFile("add1.csv", matrixAdd1) && ReadFile("add2.csv", matrixAdd2))
	{
		if(checkMatrix(matrixAdd1) && checkMatrix(matrixAdd2))
		{
			if(matrixSize(matrixAdd1, matrixAdd2, 1))
			{
				cout << "-----Adding matrixes-----\n";
				cout << "Matrix 1:\n";
				PrintMatrix(matrixAdd1);
				cout << "Added with Matrix 2:\n";
				PrintMatrix(matrixAdd2);
				cout << "Equals matrix 3:\n";
				PrintMatrix(matrixAdd(matrixAdd1, matrixAdd2));
			}else{
				cout << "Matrix is not the right size (add)." << endl;
			}
		}else{
			cout << "File is not a matrix." << endl;
		}
	}else{
		cout << "Failed to read addition matrix." << endl;
	}

	if(ReadFile("mult1.csv", matrixMult1) && ReadFile("mult2.csv", matrixMult2))
	{
		if(checkMatrix(matrixMult1) && checkMatrix(matrixMult2))
		{
			if(matrixSize(matrixMult1, matrixMult2, 2))
			{
				cout << "-----Multiplying matrixes-----\n";
				cout << "Matrix 1:\n";
				PrintMatrix(matrixMult1);
				cout << "Multiplied with Matrix 2:\n";
				PrintMatrix(matrixMult2);
				cout << "Equals matrix 3:\n";
				PrintMatrix(matrixMult(matrixMult1, matrixMult2));
			}else{
				cout << "Matrix is not the right size (mult)." << endl;
			}
		}else{
			cout << "File is not a matrix." << endl;
		}
	}else{
		cout << "Failed to read multiplication matrix." << endl;
	}

	if(ReadFile("mult1.csv", matrixTrans1))
	{
		if(checkMatrix(matrixTrans1))
		{
			if(matrixSize(matrixTrans1, matrixTrans1, 3))
			{

				cout << "-----Transposing matrix-----\n";
				cout << "Matrix 1:\n";
				PrintMatrix(matrixTrans1);
				cout << "The Transpose of matrix 1 is:\n";
				PrintMatrix(matrixTrans(matrixTrans1));
			}else{
				cout << "Matrix is not the right size." << endl;
			}
		}else{
			cout << "File is not a matrix." << endl;
		}
	}else{
		cout << "Failed to read transpose matrix." << endl;
	}

	return 0;
}

void PrintMatrix(vector<vector<int> > m)
{
	for(int i = 0; i < m.size(); i++)
	{
		for(int j = 0; j < m[0].size(); j++)
		{
			cout << m[i][j] << " ";
		}

		cout << endl;
	}
}
