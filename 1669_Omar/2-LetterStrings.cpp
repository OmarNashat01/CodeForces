#include <iostream>
#incl
using namespace std;



int main()
{

	int N;
	cin >> N;


	while (N--)
	{

		int num;
		cin >> num;

		string arr[num];

		int count = 0;

		for (int i = 0; i < num; i++) 
		{
			cin >> arr[i];
			for (int j = i-1; j >= 0; j--) {
				if (arr[i][0] == arr[j][0] ^ arr[i][1] == arr[j][1])
					count++;
			}
		}

		cout << count << endl;
	}

	return 0;
}
