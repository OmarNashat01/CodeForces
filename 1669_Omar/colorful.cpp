#include <iostream>
using namespace std;




int main()
{

	int n;
	cin >> n;

	int number;
	for (int i = 0 ; i < n; i++) {
		cin >> number;

		string arr;
		cin >> arr;

		if ( number == 1)
		{
			cout << ((arr[0] == 'W') ? "YES":"NO") << endl;
			continue;
		}
		bool found = true;
		int j =0;

		while (j < number)
		{
			while (j < number && arr[j] == 'W')
				j++;

			if (j == number)
				break;

			while (j < number - 1 && arr[j] == arr[j+1])
				j++;

			if (j == number -1 || arr[++j] == 'W')
			{
				found = false;
				break;
			}
			else
				while (j < number && arr[j++] != 'W');
		}
		


		cout << (found ? "YES":"NO") <<endl;

	}

	return 0;
}
