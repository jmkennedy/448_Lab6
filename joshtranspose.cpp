/*
 *      Filename:           transpose.cpp
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

void transpose(vector<vector<int> > &matrix) {   //takes in a 2D vector of ints by reference

    cout << "\nTransposing input matrix...\n";   //prints function status

    int Aheight = matrix.size();             //stores input matrix original height as an int
    int Awidth = matrix[0].size();           //stores input matrix original width as an int

    vector< vector<int> > transposed (Awidth , vector<int> (Aheight)); //creates 2D vector of transposed dimensions

    for(int i=0 ;i<Aheight ;i++) {           //goes along transpose rows, # of rows = original width
        for(int j=0 ;j<Awidth ;j++) {        //goes along collumns in a single row, # of elements/collumns = original height
            transposed[j][i] = matrix[i][j];  //fills in new matrix with the transposed values
		}
    }

    matrix.resize(Awidth);                   //resizes return matrix height to -> transposed size (original width)
    for(int i=0; i<Awidth; i++){             //goes along each row, # of rows NOW = original width
        matrix[i].resize(Aheight);           //resizes # of elements in ith row of R.M. (width) to -> transposed size (original height)
    }

    for(int i=0 ;i<Awidth ;i++) {            //goes along each row of the return matrix, # of rows = original width
        for(int j=0 ;j<Aheight ;j++) {       //goes along each element in the ith row, # of elements = original height
            matrix[i][j] = transposed[i][j];  //replaces the jth element in the ith row of the return matrix with the transposed value,
                                             //^^^ transposed value = ith element in the jth row of the original matrix ^^^
        }
    }

}
