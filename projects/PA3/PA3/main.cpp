#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <vector>
#include <fstream>
using namespace std;

/*
Expects a file, takes the line and makes every third number a 0. Then it outputs,
it into the desired output file.
*/

//so user provides input and output file. It reads from the out put file, makes the changes
//then saves it on the users output file they want it saved to.



int main(void)
{
	ifstream infile;
	ofstream outfile;
	string line1;
	string line2;
	string line3;
	string line4;
	string in_file_name;
	string out_file_name;
	vector<int> data_vector;

	
	//Ask user for the ppm file they want edited

	cout << "Provide the name of the ppm file you would like to read from" << endl;
	cin >> in_file_name; 
	
	cout << "Provide the name of the file you would like to write to" << endl;
	cin >> out_file_name;


	infile.open(in_file_name);

	if (!infile.good())
	{
		cout << "Error: Could not open file" << endl;

		return 1;
	}

	getline(infile, line1);

	getline(infile, line2);

	getline(infile, line3);
	


	while (infile.good() == true)
	{
		getline(infile, line4, ' ');
		
		if (line4 != "")
		{
			data_vector.push_back(stoi(line4));

		}

	}

	// to switch every third number from its number to zero just set that 
	// data = 0

	for (int i = 0; i < data_vector.size(); i += 3)
	{
		data_vector[i] = 0;
	}
	
	infile.close();


	//Writing to the file
	
	outfile.open(out_file_name);

	outfile << line1 << endl
		<< line2 << endl
		<< line3 << endl;

	for(int i = 0; i < data_vector.size(); i++)
	{
		outfile << data_vector[i] << ' ';
	}

	//try to put it in separate rows, need every 13 for one row




	return 0;

}
