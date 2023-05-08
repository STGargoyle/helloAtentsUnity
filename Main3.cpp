#include"Default.h"

class Point;
class PointOP
{
private:
	int opcnt;
public:
	PointOP() : opcnt(0)
	{  }

	Point PointAdd(const Point&, const Point&);
	Point PointSub(const Point&, const Point&);
	~PointOP()
	{
		cout << "Operation times: " << opcnt << endl;
	}
};

class Point
{
private:
	int x;
	int y;
public:
	Point(const int& xpos, const int& ypos) : x(xpos), y(ypos)
	{   }
	friend Point PointOP::PointAdd(const Point&, const Point&);
	friend Point PointOP::PointSub(const Point&, const Point&);
	// 반환형은 Point로 반환되지만 PointOP 클래스 내부의 PointAdd,PointSub 함수에
	// 접근하기 위해서 friend 선언을 한 것이다.
	friend void ShowPointPos(const Point&);
};

Point PointOP::PointAdd(const Point& pnt1, const Point& pnt2)
{
	opcnt++;
	return Point(pnt1.x + pnt2.x, pnt1.y + pnt2.y);
}

Point PointOP::PointSub(const Point& pnt1, const Point& pnt2)
{
	opcnt++;
	return Point(pnt1.x - pnt2.x, pnt1.y - pnt2.y);
}

int main()
{
	Point pos1(1, 2);
	Point pos2(2, 4);
	PointOP op;

	ShowPointPos(op.PointAdd(pos1, pos2));
	ShowPointPos(op.PointAdd(pos2, pos1));
	
	return 0;
}

void ShowPointPos(const Point& pos)
{
	cout << "x: " << pos.x << ", ";
	cout << "y: " << pos.y << endl;
}