#ifndef RECTANGLE_H
#define RECTANGLE_H
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class Rectangle
{
private:
	double width;
	double height;
public:
	Rectangle();
	Rectangle(double,double);
	void setWidth(double);
	void setHeight(double);
	double getArea();
};
#endif
