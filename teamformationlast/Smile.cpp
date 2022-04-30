#include <iostream>
using namespace std;



int main()
{
	int X,Y,Z;
	cin >> X >> Y >> Z;

	int count = 0;

	count += (Y>Z) ? Z:Y;

	Z -= count;

	count += (X/2 > Z) ? Z:X/2;

	cout << count;
}
