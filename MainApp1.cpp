//#include "Default.h"
//
//class Point
//{
//private:
//	int x; // x좌표의 범위는 0이상 100이하
//	int y; // ㅛ좌표의 범위는 0이상 100이하
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
//		cout << "좌 상단: " << '[' << upleft.x << ", ";
//		cout << upleft.y << ']' << endl;
//		cout << "우 하단: " << '[' << lowright.x << ", ";
//		cout << lowright.y << ']' << endl << endl;
//	}
//};
//
//int main()
//{
//	Point pos1 = { -2,4 }; 
//	//예제에는 0부터 100까지의 범위라고 했지만 pos1은 좌표가 음수로 되어있다.
//	Point pos2 = { 5,9 };
//	Rectangle rec = { pos1, pos2 };
//	rec.ShowRecInfo();
//	
//	return 0;
//}