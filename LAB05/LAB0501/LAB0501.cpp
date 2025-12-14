#include <iostream>
#include <string>


using namespace std;
double circleArea(double radius)
{
	return 3.14 * radius * radius;
}


int main()
{
	double radius;
	double result;

	cout << "Enter the radius :";
	cin >> radius;

	result = 3.14 * radius * radius;
	cout << "The area of the circle is:" << result << endl;

	double width, height;
	cout << "Enter width";
	cin >> width;
	cout << "Enter height";
	cin >> height;




	return 1;
}