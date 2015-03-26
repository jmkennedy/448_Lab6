#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

////////////////////////
// filepath: path to the .cvs file to read
// matrix:   a reference to the matrix that the function will fill with the contents of the tile
// return:   whether the read was successful
bool ReadFile(string filepath, vector<vector<int> > & matrix)
{
	string buffer;
	ifstream file;

	//Opens the file
	file.open(filepath.c_str());
	
	//Check to see if file opened successfully
	if(file.is_open())//file open
	{
		int rows = 0;
		int columns = 0;
		int tempColumns;

		//Find the number of rows and columns in the file
		while( getline(file, buffer))
		{
			tempColumns = 1;
			//Count ',' to find columns
			for(int i = 0; i < buffer.size(); i++)
			{
				if(buffer[i] == ',')
				{
					tempColumns++;
				}
			}

			if(columns == 0)
			{
				columns = tempColumns;
			}else{
				if(tempColumns != columns)
				{
					cout << "The file is not correctly formatted. Cannot be read.\n";
					return false;
				}	
			}
			rows++;
		}
		
		//Resize the vectors to the right size
		matrix.resize(rows);
		for(int i = 0; i < rows; i++)
		{
			matrix[i].resize(columns);
		}

		//Reset the ifstream
		file.clear();
		file.seekg(0, ios::beg);

		//Read in an assign the values
		int vectorRowIndex = 0;
		int vectorColIndex;
		int beginningOfNumIndex;
		stringstream ss;
		while( getline(file, buffer))
		{
			vectorColIndex = 0;
			beginningOfNumIndex = 0;
			for(int i = 0; i <= buffer.size(); i++)
			{
				//If its the end of a number
				if((buffer[i] == ',') || (i == (buffer.size())))
				{
					//Put that chunk in a string stream
					for(int j = beginningOfNumIndex; j < i; j++)
					{
						ss << buffer[j];
					}

					//Put the stringstream into the vector to convert to int
					ss >> matrix[vectorRowIndex][vectorColIndex];

					//Check for conversion failure
					if(ss.fail())
					{
						cout << "Failed to create matrix (bad conversion)." << endl;
						return false;
					}

					//Reset and clear the string stream
					ss.str("");
					ss.clear();
					
					beginningOfNumIndex = i+1;
					vectorColIndex++;
				}
			}
		
			vectorRowIndex++;
		}
	}else //file failed to open
	{
		cout << "File failed to open.\n";
		return false;
	}

	//Close file
	file.close();

	return true;
}
