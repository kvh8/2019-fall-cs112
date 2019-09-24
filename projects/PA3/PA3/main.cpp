#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <vector>
#include <fstream>
using namespace std;

/*
Expects a file, takes the 6 line and makes every third number a 0. Then it outputs,
it into the desired output file.
*/

//so user provides input and output file. It reads from the out put file, makes the changes
//then saves it on the users output file they want it saved to.

/*
	ifstream myfile;
	string line1;
	string line2;
	string line3;
	string line4;
	string line5;
	string line6;
	string file_name;

				type function_name(type source_file, type output_file)
				{
				cout << "Provide with the file you would like to be edited" << endl;
				cin >> file_name;


				...
				will need an if-then probably to make sure the file
				has things in it.
				will need to declare the strings here and file

				if(source_file.good() == true)
				{
				...
				within this will need the getline then while loop - maybe
				}

				else
				{
				cout << "bad file" << endl;
				}

				-> or something like that

				}
*/





int main(void)
{
	ifstream myfile;
	string line1;
	string line2;
	string line3;
	string line4;
	string line5;
	string line6;
	string file_name;

	/*
	cout << "Provide with the file you would like to be edited" << endl;
	cin >> file_name; 
	*/


	//use .open with myfile and the file name
	// myfile.open(file_name);



	//*******************
	myfile.open("tinypix.ppm");

	//use getline outside the while loop for the first five lines
	//Then while loop for the rest

	getline(myfile, line1);
	cout << "Image Format: " << line1 << endl;

	getline(myfile, line2, ' ');
	cout << "Width: " << line2 << endl;

	getline(myfile, line3);
	cout << "Height: " << line3 << endl;

	getline(myfile, line4);
	cout << "Max Pixel Value: " << line4 << endl;

	getline(myfile, line5);
	cout << "Data: " << endl << line5 << endl;


	while (getline(myfile, line6))
	{
		cout << line6 << endl;
	}

	myfile.close();


	return 0;

}