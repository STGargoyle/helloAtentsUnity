#pragma once

class Point
{
private: // 정보은닉 단순히 숨기기만 하는 것이 아닌,
	int x; // 잘못입력된 데이터를 가려내기 위해서 private로 선언
	int y;

public:
	Point(const int &xpos, int &ypos);
	int GetX() const; // 함수 뒤에 const를 붙이는 이유는
	int GetY() const; // 해당 함수에서는 멤버변수가 변하지 않겠다는 뜻이다.
	bool SetX(int xpos);
	bool SetY(int ypos);
};