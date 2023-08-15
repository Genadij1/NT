#include "COO.h"

void SetPoint()
{
	Point n;
	n.SetX();
	n.SetY();
	n.SetZ();
	n.SavePoint();
}

void GetPoint()
{
	Point n;
	n.ViewPoint();
}

int main()
{
	int choise;
	cout << "1 - Add point || 2 - View poin" << endl;
	cin >> choise;

	switch (choise)
	{
	case 1:
		SetPoint();
		break;
	case 2:
		GetPoint();
		break;
	default:
		cout << "Try again!";
		break;
	}
	system("pause>nul");
	return 0;
}