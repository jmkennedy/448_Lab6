#include <vector>

bool checkMatrix(vector<vector<int>> mat1, vector<vector<int>> mat2, int op){
	if (op == 1){//Addition
		//Matricies must be same size
		if(mat1[1].size == mat2[1].size && mat1.size == mat2.size){
			//Checks dimensions
			return true;
		}else{
			return false;
		}
	}else if(op == 2){//Multiplication
		//1st matrix is 2*3, second is 3*4
		if(mat1.size == 2 && mat1[1].size == 3 && mat2.size == 3 && mat2[1].size == 4){
			return true;
		}else
			return false;
		}
	}else if(op == 3){//transpose
		//Only uses 1 matrix, is 2*3
		if(mat1.size == 2 && mat1[1].size == 3){
			return true;
		}else{
			return false;
		}
	}else{//op is bad
		return false;
	}
}
