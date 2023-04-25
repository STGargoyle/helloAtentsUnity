#pragma once

class Point
{
private: // �������� �ܼ��� ����⸸ �ϴ� ���� �ƴ�,
	int x; // �߸��Էµ� �����͸� �������� ���ؼ� private�� ����
	int y;

public:
	Point(const int &xpos, int &ypos);
	int GetX() const; // �Լ� �ڿ� const�� ���̴� ������
	int GetY() const; // �ش� �Լ������� ��������� ������ �ʰڴٴ� ���̴�.
	bool SetX(int xpos);
	bool SetY(int ypos);
};