#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Fraction
{
private:
	int Numerator1;
	int Denominator1;
	int Numerator2;
	int Denominator2;

public:
	Fraction();
	~Fraction();

	void SetNumerator1();
	void SetDenominator1();
	void SetNumerator2();
	void SetDenominator2();

	void Pl();
	void Min();
	void Mult();
	void Division();
};
