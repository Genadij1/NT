#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Point
{
private:
	int x;
	int y;
	int z;

public:

	void SetX()
	{
		cout<< "Enter the x = ";
		cin >> x;
		x = x;
	}
	void SetY()
	{
		cout << "Enter the y = ";
		cin >> y;
		y = y;
	}
	void SetZ()
	{
		cout << "Enter the z = ";
		cin >> z;
		z = z;
	}

	void SavePoint()
	{

		ofstream outFile("data1.txt", ios::app);
		if (outFile.is_open())
		{

			outFile << "X = "<< x << "\t|" << "Y = "<< y << "\t|" << "Z = "<< z << "\n" << "\n";
			outFile.close();
			cout << "The data was successfully saved to a file.\n";
		}
		else
		{
			cout << "Error opening file.\n";
		}

	}

	void ViewPoint()
	{
		ifstream inFile("data1.txt");
		string line;

		if (inFile.is_open())
		{
			while (getline(inFile, line))
			{
				cout << line << endl;
			}
			inFile.close();
		}
		else
		{
			cout << "Error opening file.\n";
		}
	}

};

