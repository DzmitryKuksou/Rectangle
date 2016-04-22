#include"iostream"
using namespace std;
#include"Rectangle.h"
int main()
{
	int a, b;
	cout << "enter 1 size:\n";
	cin >> a;
	cout << "enter 2 size:\n";
	cin >> b;
	Rectangle Rect;
	cout << "P:" << Rect.Perimetr(a, b) << endl;
	cout << "S:" << Rect.Square(a, b) << endl;
	Rect.Squared(a, b);
	Rect.DrawSquare(a, b);
	system("pause");
}