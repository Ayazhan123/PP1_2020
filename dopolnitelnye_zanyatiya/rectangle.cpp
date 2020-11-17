#include <iostream>

/*
double areaOfCircle(double radius)
{
	return 3.14 * radius * radius;
}
*/

double areaOfRectangle(double a, double b)
{
	return a * b;
}

double perimeterOfRectangle(double a, double b)
{
	return 2 * (a + b);
}

void printRectangleParameters(double a, double b)
{
	double perimeter = perimeterOfRectangle(a, b);
	double area = areaOfRectangle(a, b);

	std::cout << "Height = " << a << std::endl;
	std::cout << "Width = " << b << std::endl;
	std::cout << "Area = " << area << std::endl;
	std::cout << "Perimeter = " << perimeter << std::endl;
}


int main()
{
	double height, width;

	do
	{
		std::cout << "Please, enter height and width: ";
		std::cin >> height >> width;

		printRectangleParameters(height, width);
	} while (height > 0 && width > 0);

	return 0;
}