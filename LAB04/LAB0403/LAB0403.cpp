#include<iostream>
#include<string>

using namespace std;

int main()
{
	int sum = 0;
	cout << "---------- start ผลรวมของเลข 1 - 100 ---------- \n";
	cout << " sum = ผลรวมของเลข 1 - 100 \n";
	
	for (int i = 1;
		i <= 100;
		i++)

	{
		sum = sum + i;
	}
	cout << "ผลรวมของเลข 1 - 100 คือ:" << sum << " \n";
	return 0;
}