#include <iostream>
#include <vector>
using namespace std;

int main()
{

	int n;
	cin >> n;

	int number;
	for (int i = 0 ; i < n; i++) {
		cin >> number;

		int arr[number];
		for (int j = 0; j  < number; j++) {
			cin >> arr[j];
		}
		if ( number < 3)
		{
			cout << "YES\n";
			continue;
		}

		int even = arr[0] % 2;
		int odd = arr[1] % 2;
		for (int k=2; k< number; k+=2) {

			if (arr[k] % 2 != even)
			{
				cout << "NO" <<endl;
				break;
			}
			if (k+1 < number && arr[k+1] % 2 != odd)
			{
				cout << "NO" <<endl;
				break;
			}

			if ( k == number-1 || k == number -2)
				cout << "YES\n";
		}

	}

	return 0;
}
