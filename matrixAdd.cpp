#include <vector>
#include <iostream>

#ifndef MADD
#define ADD

using namespace std;

///////////////////////////
// m1: the first matrix to be added
// m2: the second matrix to be added
// return: a matrix that is the result of the addition
vector<vector<int>> matrixAdd(vector<vector<int> > m1, vector<vector<int> > m2)
{
	vector<vector<int> > result = {{0}};

	//make sure they are the same size
	if((m1.size() != m2.size()) || (m1[0].size() != m2[0].size()))
	{
		cout << "Matrixes are not the same size. Matrixes not added" << endl;
		return result;
	}

	//Resize the result matrix
	result.resize(m1.size());
	
	for(int i = 0; i < result.size(); i++)
	{
		result[i].resize(m1[0].size());
	}

	//Assign the values
	for(int i = 0; i < result.size(); i++)
	{
		for(int j = 0; j < result[0].size(); j++)
		{
			result[i][j] = m1[i][j] + m2[i][j];
		}
	}

	//Return the result
	return result;
}

#endif
