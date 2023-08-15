#include "COO.h"

class PointProvider
{
private:
	Point n;
public:
	void SetPoint()
	{
		n.SetX();
		n.SetY();
		n.SetZ();
		n.SavePoint();
	}
	
	void GetPoint()
	{
		n.ViewPoint();
	}
};

