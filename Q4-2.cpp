#include<iostream>
#include<cstdlib>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(const int &x, const int &y)
		:xpos(x), ypos(y)
	{	}
	void ShowPointInfo() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

class Circle
{
private:
	Point cen;
	int rad;

public:
	Circle(const int &x, const int &y, const int &r)
		:cen(x, y), rad(r)
	{	}
	void ShowCircleInfo() const
	{
		cout << "radius: " << rad << endl;
		cen.ShowPointInfo();
		cout << endl;
	}
};

class Ring
{
private:
	Circle inCir;
	Circle outCir;

public:
	Ring(int inX, int inY, int inR, int outX, int outY, int outR)
		:inCir(inX, inY, inR), outCir(outX, outY, outR)
	{	}
	void ShowRingInfo()
	{
		cout << "Inner Circle Info..." << endl;
		inCir.ShowCircleInfo();
		cout << "Outer Circle Info..." << endl;
		outCir.ShowCircleInfo();
	}
};

int main()
{
	Ring ring(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	return 0;
}