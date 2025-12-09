#include <iostream>
#include <string>
 
using namespace std;

int main() 
{
	cout << "test lab 04 \n";
	cout << "test lab 04-01 \n";

	cout << " Myname is " << "Tawatchai" << endl;

	cout << "please enter Your name ";

	cin >> name;
	cin.ignore(); 

	getline(cin, name);

	return 1;
}