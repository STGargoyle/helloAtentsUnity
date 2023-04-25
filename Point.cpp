#include "Default.h"
#include "Point.h"

Point::Point(const int& xpos, const int& ypos)
	:x (xpos), y (ypos)
{	}

int Point::GetX() const { return x; }
int Point::GetY() const { return y; }
// 반환만 하는 변수가 C++엔 간간히 있다.

bool Point::SetX(int xpos)
{
	if (0 > xpos || xpos > 100)
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}

	x = xpos;
	return true;
}

bool Point::SetY(int ypos)
{
	if (0 > ypos || ypos > 100)
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}

	y = ypos;
	return true;
}