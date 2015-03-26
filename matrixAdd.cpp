#include <vector>
#include <iostream>

#ifndef MADD
#define ADD

using namespace std;

vector<vector<int>> matrixAdd(vector<vector<int> > m1, vector<vector<int> > m2)
{
	vector<vector<int> > result = {{0}};

	if((m1.size() != m2.size()) || (m1[0].size() != m2[0].size()))
	{
		cout << "Matrixes are not the same size. Matrixes not added" << endl;
		return result;
	}

	result.resize(m1.size());
	
	for(int i = 0; i < result.size(); i++)
	{
		result[i].resize(m1[0].size());
	}

	for(int i = 0; i < result.size(); i++)
	{
		for(int j = 0; j < result[0].size(); j++)
		{
			result[i][j] = m1[i][j] + m2[i][j];
		}
	}

	return result;
}

#endif
