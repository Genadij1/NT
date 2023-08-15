#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include "StudentsProvider.h"
using namespace std;

int main()
{
	int choise;
	StudentProvider n;
	n.SetStudents();
	cout << "VievStudent ?" << endl << "Yes - 1" << endl << "no - 2" << endl;
	cin >> choise;
	if (choise == 1)
	{
	n.GetStudents();
	}
	else
	{
		cout << "Ok!";
	}
	

	system("pause>nul");
	return 0;
}