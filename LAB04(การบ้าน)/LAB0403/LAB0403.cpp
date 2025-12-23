#include<iostream>
#include<string>

using namespace std;

int main()
{
	int sum = 0;
	cout << "---------- start  1 - 100 ---------- \n";
	cout << " sum =  1 - 100 \n";

	for (int i = 1;
		i <= 100;
		i++)

	{
		sum = sum + i;
	}
	cout << "ผลรวม 1-100:" << sum << " \n";
	return 0;
}