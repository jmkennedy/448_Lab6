#include <vector>

bool checkMatrix(vector<vector<int>> mat) {
	for (int i=0; i < mat.size - 1; i++) {
		if(mat[i].size != mat[i+1].size) {return false;}
	};
	return true;
};

