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

bool checkMatrix(vector< vector<int> > matrix) {                            //takes in a 2D vector of ints

    cout << "\nChecking if 2D input vector represents a valid matrix...";
    //cout << "\nTotal rows: " << matrix.size();                                          //optional debug text
    //cout << "\nElements in row " << 1 << ": " << matrix[0].size();                        //optional debug text

    for (int i=0; i < matrix.size()-1; i++) {                               //goes along each row of the input vector, ends at second-to-last row to avoid calling an out-of-bounds index
                                                                            //^^^ does not need to run for the last row, it will be compared with the second-to-last row ^^^

        //cout << "\nElements in row " << i+2 << ": " << matrix[i+1].size();                //optional debug text

        if(matrix[i].size() != matrix[i+1].size()) {                        //checks if the ith and i+1th rows have the same # of elements, TRUE(1) if not equal, FALSE(0) otherwise

            //cout << "\nRow " << i+2 << " has a different size than row " << i+1;        //optional debug text

            cout << "\nThe rows are not equal sizes, the input vector is not a valid matrix.";   //optional debug text
            return false;                                                   //returns FALSE(0) to function call when two rows are not equal, indicates that the 2D vector is not a valid matrix
        }
    }

    cout << "\nThe input vector represents a valid matrix.\n";
    return true;                                                            //returns TRUE(1) to function call if the input vector passes all tests, indicates that the 2D vector is a valid matrix
};

