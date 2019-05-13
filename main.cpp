#include "Rectangle.h"

void swapByReference(Rectangle &r1, Rectangle &r2)
{
	Rectangle tmp = r1;
	r1 = r2;
	r2 = tmp;
}
void swapByPointer(Rectangle *r1, Rectangle *r2)
{
	Rectangle tmp = *r1;
	*r1 = *r2;
	*r2 = tmp;
}

int main()
{
	double w1, h1, w2, h2;
	cin >> w1 >> h1 >> w2 >> h2;
	Rectangle r1(w1, h1);
	Rectangle r2(w2, h2);
	cout << fixed << setprecision(2) << "SwapByReference:" << r1.getArea() << " " << r2.getArea() << " to ";
	swapByReference(r1, r2);
	cout << fixed << setprecision(2) << r1.getArea() << " " << r2.getArea() << endl;
	cout << fixed << setprecision(2) << "SwapByPointer:" << r1.getArea() << " " << r2.getArea() << " to ";
	swapByPointer(&r1, &r2);
	cout << fixed << setprecision(2) << r1.getArea() << " " << r2.getArea() << endl;
	system("pause");
}