#include "Students.h"

class StudentProvider
{
private:
	Students n;
public:
	void SetStudents()
	{
		n.SetNameStudents();
		n.SetSernameStudents();
		n.SetDateBirth();
		n.SetPhoneNumber();
		n.SetCity();
		n.SetNameInstitution();
		n.SetNumberGroup();
		n.SaveToFile();
	}
	void GetStudents()
	{
		n.GetNameStudents();
		n.GetSernameStudents();
		n.GetDateBirth();
		n.GetPhoneNumber();
		n.GetCity();
		n.GetNameInstitution();
		n.GetNumberGroup();
		n.LoadToFile();
		
	}
};


