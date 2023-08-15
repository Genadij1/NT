#include "Header.h"


void Fraction::SetNumerator1()
{
	std::cout << "Enter the Numerator = ";
	std::cin >> Numerator1;
}

void Fraction::SetDenominator1()
{
	std::cout << "Enter the Denominator = ";
	std::cin >> Denominator1;
}

void Fraction::SetNumerator2()
{
	std::cout << "Enter the Numerator2 = ";
	std::cin >> Numerator2;
}

void Fraction::SetDenominator2()
{
	std::cout << "Enter the Denominator2 = ";
	std::cin >> Denominator2;
}

void Fraction::Pl()
{
	if (Denominator1 == Denominator2)
	{
		std::cout << "result = " << (Numerator1 + Numerator2) << "/" << Denominator1 << std::endl;
	}
	else
	{
		std::cout << "result = " << ((Denominator2 * Numerator1) + (Denominator1 * Numerator2)) << "/" << (Denominator1 * Denominator2) << std::endl;
	}
}

void Fraction::Min()
{
	if (Denominator1 == Denominator2)
	{
		std::cout << "result = " << (Numerator1 - Numerator2) << "/" << Denominator1 << std::endl;
	}
	else
	{
		std::cout << "result = " << ((Denominator2 * Numerator1) - (Denominator1 * Numerator2)) << "/" << (Denominator1 * Denominator2) << std::endl;
	}
}

void Fraction::Mult()
{
	std::cout << "result = " << (Numerator1 * Numerator2) << "/" << (Denominator1 * Denominator2) << std::endl;
}

void Fraction::Division()
{
	std::cout << "result = " << (Numerator1 * Denominator2) << "/" << (Denominator1 * Numerator2) << std::endl;
}

int main()
{
	Fraction n;

	std::cout << "Enter Fraction 1: " << std::endl;
	n.SetNumerator1();
	n.SetDenominator1();

	std::cout << "Enter Fraction 2: " << std::endl;
	n.SetNumerator2();
	n.SetDenominator2();

	std::cout << "1 - Plus || 2 - Min || 3 - Mult || 4 - Div" << std::endl;
	int choice;
	std::cin >> choice;

	switch (choice)
	{
	case 1:
		n.Pl();
		break;
	case 2:
		n.Min();
		break;
	case 3:
		n.Mult();
		break;
	case 4:
		n.Division();
		break;
	default:
		break;
	}

	system("pause>nul");
	return 0;
}
