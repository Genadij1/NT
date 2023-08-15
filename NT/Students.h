#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Students
{
private:
	string NameStudents;
	string SernameStudents;
	string DateBirth;
	string PhoneNumber;
	string City;
	string NameInstitution;
	string NumberGroup;
public:

	void SetNameStudents()
	{
		cout << "Enter the Name: ";
		cin >> NameStudents;
		NameStudents = NameStudents;
	}
	void SetSernameStudents()
	{
		cout << "Enter the Sername: ";
		cin >> SernameStudents;
		SernameStudents = SernameStudents;
	}
	void SetDateBirth()
	{
		cout << "Enter the DateBirth: ";
		cin >> DateBirth;
		DateBirth = DateBirth;
	}
	void SetPhoneNumber()
	{
		cout << "Enter the PhoneNumber: ";
		cin >> PhoneNumber;
		PhoneNumber = PhoneNumber;
	}
	void SetCity()
	{
		cout << "Enter the City: ";
		cin >> City;
		City = City;
	}
	void SetNameInstitution()
	{
		cout << "Enter the NameInstitution: ";
		cin >> NameInstitution;
		NameInstitution = NameInstitution;
	}
	void SetNumberGroup()
	{
		cout << "Enter the NumberGroup: ";
		cin >> NumberGroup;
		NumberGroup = NumberGroup;
	}

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

	string GetNameStudents()
	{
		return NameStudents;
	}
	string GetSernameStudents()
	{
		return SernameStudents;
	}
	string GetDateBirth()
	{
		return DateBirth;
	}
	string GetPhoneNumber()
	{
		return PhoneNumber;
	}
	string GetCity()
	{
		return City;
	}
	string GetNameInstitution()
	{
		return NameInstitution;
	}
	string GetNumberGroup()
	{
		return NumberGroup;
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

