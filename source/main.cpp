#include <iostream>
#include "shape.hpp"
#include "point.hpp"
#include "circle.hpp"
#include "polygon.hpp"
#include "triangle.hpp"
#include "quadrangle.hpp"

int main()
{
	Shape* shapesArr[5];
	int option;
	double radius, x, y;
	std::cout << "Hello, please choose which five shapes you want to insert into the array:";
	for (int i = 0; i < 5; ++i)
	{
		std::cout << "\n1- Circle\n2- Triangle\n3- Quadrangle\nPlease enter your choice: ";
		std::cin >> option;
		std::cout << std::endl;
		switch (option)
		{
		case 1:
		{
			std::cout << "Please enter the center point:\nX = "; std::cin >> x;
			std::cout << "Y = "; std::cin >> y;
			std::cout << "\nPlease enter the radius length: "; std::cin >> radius;
			Point* p = new Point(x, y);
			Circle* c = new Circle(*p, radius);
			shapesArr[i] = c;
			delete p;
			std::cout << "Circle added to the array!" << std::endl;
		}
		break;

		case 2:
		{
			Point* arr[3];
			for (int p = 0; p < 3; ++p)
			{
				std::cout << "Please enter a point:\nX = "; std::cin >> x;
				std::cout << "Y = "; std::cin >> y;
				arr[p] = new Point(x, y);
			}
			Triangle* t = new Triangle(*arr[0], *arr[1], *arr[2]);
			shapesArr[i] = t;
			delete arr[0]; delete arr[1]; delete arr[2];
			std::cout << "Triangle added to the array!" << std::endl;
		}
		break;

		case 3:
		{
			Point* array[4];
			for (int q = 0; q < 4; ++q)
			{
				std::cout << "Please enter a point:\nX = "; std::cin >> x;
				std::cout << "Y = "; std::cin >> y;
				array[q] = new Point(x, y);
			}
			Quadrangle* q = new Quadrangle(*array[0], *array[1], *array[2], *array[3]);
			shapesArr[i] = q;
			delete array[0]; delete array[1]; delete array[2], delete array[3];;
			std::cout << "Quadrangle added to the array!" << std::endl;
		}
		break;

		default:
			std::cout << "Invalid input, please try again..." << std::endl;
			--i;
		break;
		}
	}

	std::cout << "\nAreas:" << std::endl;
	for (int i = 1; i <= 5; ++i)
	{
		std::cout << "Shape " << i << ": " << shapesArr[i - 1]->className() << ": " << shapesArr[i - 1]->area() << " cm^2" << std::endl;
	}
	std::cout << "\n---------------------------------\n" << std::endl;
	std::cout << "Perimeters:" << std::endl;
	for (int i = 1; i <= 5; ++i)
	{
		std::cout << "Shape " << i << ": " << shapesArr[i - 1]->className() << ": " << shapesArr[i - 1]->perimeter() << " cm" << std::endl;
		delete shapesArr[i - 1];
	}
	return 0;
}