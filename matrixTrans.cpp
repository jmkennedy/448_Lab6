//Matrix Transpose
//Author: Jake Kennedy
//Made on 4/1/15

#include <vector>
#include <iostream>

using namespace std;

vector<vector<int> > matrixTrans(vector<vector<int> > m1){
	//Should be a 2*3 matrix transposed into a 3*2 matrix
	//Create a 3*2 vector
	vector<int> rsltCol(2);
	vector<vector<int> > rslt(3,rsltCol);

	//Transposal
	for(int i=0;i<rslt.size();i++){
		for(int j=0;j<rslt[i].size();j++){
			rslt[i][j] = m1[j][i];
		}
	}
	//Here is where you would return/print the resulting matrix.
	return rslt;
}
