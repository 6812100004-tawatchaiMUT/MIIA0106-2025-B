#include <iostream>
#include <string>

using namespace std;

int main()
{
	int number = 4;
	cout << "Multiplication Tabie for" << number << "\n";
	for (int i = 1; i <= 12; i++)
	{
		cout << number << " * " << i << " = " << number * i << "\n";
	}


	return 0;
}