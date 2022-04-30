#include <iostream>
using namespace std;



int main()
{
	int N; cin >> N;

	while (N--)
	{
		int num, R,L;
		cin >> num >> R >> L;

		if (R >= (num/2 + 1) && L >= num/2)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
