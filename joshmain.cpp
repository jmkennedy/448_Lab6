//
// Josh's testing main for transpose and checkMatrix functions
//


#include <vector>
#include <iostream>
#include "transpose.cpp"
#include "checkMatrix.cpp"

using namespace std;

int main(){

    //higher dimension is height, composition is a vertical vector containing horizontal vectors

    int height = 2;                                                  //
    int width = 3;                                                   //
                                                                     //
    vector< vector<int> > matrix (height , vector<int> (width));     //
                                                                     // Creates a sample input vector
    for(int i =0;i<height;i++) {                                     //
        for(int j=0;j<width;j++) {                                   //
            matrix[i][j] = width*i+j+1;                              //
        }                                                            //
    }                                                                //

    //matrix[1].resize(width2-1);                                    // When uncommented creates an invalid matrix (for testing)

    checkMatrix(matrix);                                             // Calls checkMatrix function on input vector

    cout << "\nOriginal Matrix:\n";                                  //
    for(int i =0;i<height;i++) {                                     //
        for(int j=0;j<width;j++) {                                   //
            cout << matrix[i][j] << " ";                             // Prints contents of pre-transposed matrix
        }                                                            //
        cout << "\n";                                                //
    }                                                                //

    transpose(matrix);                                               // Calls transpose function on input matrix

    cout << "\nTransposed Matrix:\n";                              //
    for(int i =0;i<width;i++) {                                      //
        for(int j=0;j<height;j++) {                                  //
            cout << matrix[i][j] << " ";                             // Prints contents of transposed matrix
        }                                                            //
        cout << "\n";                                                //
    }                                                                //
    cout << "\n";                                                    //

}
