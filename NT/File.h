#include "Students.h"

class StudentsFile
{
private:
	Students* student;
public:
	void SaveToFile()
	{
		ofstream outFile("data.txt", ios::app);
		if (outFile.is_open())
		{

			outFile << NameStudents << "\t|" << SernameStudents << "\t|" << DateBirth << "\t|" << PhoneNumber << "\t|" << City << "\t|" << NameInstitution << "\t|" << NumberGroup << "\n" << "\n";
			outFile.close();
			cout << "The data was successfully saved to a file.\n";
		}
		else
		{
			cout << "Error opening file.\n";
		}
	}

	void LoadToFile()
	{
		ifstream inFile("data.txt");
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
