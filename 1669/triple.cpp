#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

	int n;
	cin >> n;

	int number;
	for (int i = 0 ; i < n; i++) {
		cin >> number;

		vector<int> arr(number);
		for (int j = 0; j  < number; j++) {
			cin >> arr[j];
		}
	
		sort(arr.begin(), arr.end());

		bool found = false;
		for (int k=0; k < number - 2; k++) {

			if (arr[k] == arr[k+2] )
			{
				cout << arr[k]<<endl;
				found = true;
				break;
			}	
		}
		if (!found)
			cout << -1 << endl;
	}

	return 0;
}
