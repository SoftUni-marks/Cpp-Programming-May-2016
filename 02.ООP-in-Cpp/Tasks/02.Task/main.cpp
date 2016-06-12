#include <iostream>

class CPoint
{
private:
	double x;
	double y;

public:
	CPoint(double x = 0, double y = 0)
	{
		this->x = x;
		this->y = y;
	}
};

class CRectangular
{
private:
	CPoint topLeftEdge;
	double width;
	double height;

public:
	CRectangular(CPoint topLeftEdge, double width, double height)
	{
		this->topLeftEdge = topLeftEdge;
		this->width = width;
		this->height = height;
	}

	double perimeter();
	double area();
};

double CRectangular::perimeter()
{
	return 2 * (this->width + this->height);
}

double CRectangular::area()
{
	return this->width * this->height;
}

int main()
{
	CRectangular rectangular(CPoint(6, 9), 15, 5);

	std::cout << "Rectangular perimeter: " << rectangular.perimeter() << std::endl;
	std::cout << "Rectangular area: " << rectangular.area() << std::endl;

	system("pause");

	return 0;
}