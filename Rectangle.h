#pragma once
#include"Point.h"
using namespace std;

class Rectangle
{
private:
	Point upLeft;
	Point lowRight;
public:
	Rectangle(const int &x1, const int& y1, const int& x2, const int& y2);
	// 참조자를 활용하여 메모리 공간을 절약한다.
	void ShowRecInfo() const;
};