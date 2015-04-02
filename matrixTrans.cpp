/*
 *      Filename:           matrixTrans.cpp
 *      Author:             Joshua Jenson
 *      Date modified:      4/1/15
 *      Course:             EECS 448
 *      Assignment:         Lab 6
 *      Description:        Function which takes in a 2-dimensional input vector representing a n-by-m matrix
 *                              and modifies it so that it becomes a 2-dimensional vector representing the
 *                              m-by-n transpose of the original matrix.
 */

#include <vector>
#include <iostream>

using namespace std;

//takes in a 2D vector of ints by reference
void transpose(vector<vector<int> > &matrix) {

    int Aheight = matrix.size();
    int Awidth = matrix[0].size();

    //creates 2D vector of transposed dimensions
    vector< vector<int> > transposed (Awidth , vector<int> (Aheight));

    //fills in new matrix with the transposed values
    for(int i=0 ;i<Aheight ;i++) {
        for(int j=0 ;j<Awidth ;j++) {
            transposed[j][i] = matrix[i][j];
		}
    }

    //resizes original matrix height to transposed size (original width)
    matrix.resize(Awidth);

    //resizes # of elements in ith row of original matrix to transposed size (original height)
    for(int i=0; i<Awidth; i++){
        matrix[i].resize(Aheight);
    }

    //copies values from transposed matrix to the original
    for(int i=0 ;i<Awidth ;i++) {
        for(int j=0 ;j<Aheight ;j++) {
            matrix[i][j] = transposed[i][j];

        }
    }
}
