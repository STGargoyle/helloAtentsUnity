//#include "Default.h"
//
//class Point
//{
//private:
//	int x; // x��ǥ�� ������ 0�̻� 100����
//	int y; // ����ǥ�� ������ 0�̻� 100����
//};
//
//class Rectangle
//{
//public:
//	Point upleft;
//	Point lowright;
//public:
//	void ShowRecInfo()
//	{
//		cout << "�� ���: " << '[' << upleft.x << ", ";
//		cout << upleft.y << ']' << endl;
//		cout << "�� �ϴ�: " << '[' << lowright.x << ", ";
//		cout << lowright.y << ']' << endl << endl;
//	}
//};
//
//int main()
//{
//	Point pos1 = { -2,4 }; 
//	//�������� 0���� 100������ ������� ������ pos1�� ��ǥ�� ������ �Ǿ��ִ�.
//	Point pos2 = { 5,9 };
//	Rectangle rec = { pos1, pos2 };
//	rec.ShowRecInfo();
//	
//	return 0;
//}