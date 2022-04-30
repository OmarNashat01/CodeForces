#include <iostream>

using namespace std;



int main()
{
	int N; cin >> N;

	while (N--)
	{

		int num; cin >> num;

		int x, count = 0;
		while(num--)
		{
			cin >> x;
			if (x > 0)
				count++;
		}
		cout << count << endl;
	}
}
