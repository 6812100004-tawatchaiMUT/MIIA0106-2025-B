// TODO: แสดงค่า score, address และ pointer
#include<iostream>

using namespace std;

int main() 
{
	int score = 50;
	int* ptr =  &score;

	// TODO
	cout << "Value of score is\t " << score << endl;
	cout << "VALUE OF ptr is\t " << ptr << endl;

	cout << "Address of score is\t" << &score << endl;
	cout << "Address of prt is\t" << &ptr << endl;

	return 0;
}