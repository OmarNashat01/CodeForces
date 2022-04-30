#include <iostream>
#include <queue>
using namespace std;



int main()
{
	int N; cin >> N;

	int count = 0;
	queue<int> S;
	int lastnum = 0;
	int num;
	while (N--)
	{
		cin >> num;

		if(num == 1)
		{
			count++;
			S.push(lastnum);
		}

		lastnum = num;
	}
	S.push(num);
	S.pop();
	cout << count << endl;

	for (int i = 0; i < count; i++) {
		cout << S.front() << " "; S.pop();
	}
}
