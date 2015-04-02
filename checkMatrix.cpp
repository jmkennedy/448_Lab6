/*
 *      Filename:           checkMatrix.cpp
 *      Author:             Joshua Jenson
 *      Date modified:      4/1/15
 *      Course:             EECS 448
 *      Assignment:         Lab 6
 *      Description:        Function which takes in a 2-dimensional input vector representing a n-by-m matrix
 *                              and checks its properties to determine whether or not it represents a valid
 *                              matrix. Returns TRUE(1) if the input vector is a valid matrix; FALSE(0) if not.
 */

#include <vector>
#include <iostream>

using namespace std;

//takes in a 2D vector of ints
bool checkMatrix(vector< vector<int> > matrix) {

    //goes along each row of the input vector, ends at second-to-last row to avoid calling an out-of-bounds indexdoes not need to run for the last row, it will be compared with the second-to-last row
    for (int i=0; i < matrix.size()-1; i++) {

        //checks if the ith and i+1th rows have the same # of elements, TRUE(1) if not equal, FALSE(0) otherwise
        if(matrix[i].size() != matrix[i+1].size()) {

            //returns FALSE(0) to function call when two rows are not equal, indicates that the 2D vector is not a valid matrix
            return false;
        }
    }

    //returns TRUE(1) to function call if the input vector passes all tests, indicates that the 2D vector is a valid matrix
    return true;
};

