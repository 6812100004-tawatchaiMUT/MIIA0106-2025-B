#include <iostream>
#include <string>

using namespace std;

void swapValues(int a, int b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	cout << "Inside swapValues function: " << endl;
	cout << "a = " << a << "b = " << endl;
}
void swapRef(int& a, int& b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	cout << "Inside swapValues function: " << endl;
	cout << "a = " << a << "b = " << b << endl;
}


int main()
{
	int a, b;
	cout << "Enter a integers:";
	cin >> a;
	cout << "Enter b integers:";
	cin >> b;
	cout << "Before swapValues function call: " << endl;
	cout << "a = " << a << " b = " << b << endl;
	swapValues(a, b);
	cout << "a = " << a << " b = " << b << endl;

	swapRef(a, b);
	cout << "a = " << a << " b = " << b << endl;




	return 1;
}