#include <string>
#include <vector>
#include <fstream>

vector<vector<int>> ReadFile(string filepath)
{
	ifstream file;
	file.open(filepath);
	
	if(file.is_open())
	{
		char[256] buffer;
		file.getline(buffer, 256);
		
	}else
	{
		std::cout << "File failed to open.\n";
	}
}
