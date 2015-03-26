//Matrix Multiplication
//Author: Jake Kennedy
//Made on 3/26/15

#include <vector>
#include <iostream>

void matrixMult(vector<vector<int> > m1, vector<vector<int> > m2){
	//Should be a 2*3 matrix times a 3*4 matrix to produce a 2*4 matrix
	//Create a 2*4 vector
	vector<int> rsltCol(4);
	vector<vector<int> > rslt(2,rsltCol)

	//Multiplication and Storage
	for(int i=0;i<rslt.size();i++){
		for(int j=0;j<rslt[i].size();j++){
			int product = 0;
			for(int k=0;k<3;k++){
				//Multiply the values and add to the product
				product += m1[i][k]*m2[k][j];
			}
			//assign the product to the correct matrix cell
			rslt[i][j] = product;
		}
	}
	//Here is where you would return/print the resulting matrix.

}
