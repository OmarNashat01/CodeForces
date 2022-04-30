#include <iostream>
#include <stack>
#include <queue>
using namespace std;



int main()
{
	int N; cin >> N;

	string cypher; cin >> cypher;

	int d = cypher.size();
	stack<char> S;
	stack<char> D;
	queue<char> Q;

	D.push(d);
	for (int i = d/2; i > 0; i--) {
		if (d % i == 0)	
			D.push(i);
	}
	while (!D.empty())
	{
		d = D.top();
		D.pop();
		int i;
		for (i = 0; i < d; i++) {
			S.push(cypher[i]);
		}
		for (i = i; i < cypher.size(); i++) {
			Q.push(cypher[i]);
		}
		cypher = "";
		while (!S.empty())
		{
			cypher = cypher + S.top();
			S.pop();
		}
		while (!Q.empty())
		{
			cypher = cypher + Q.front();
			Q.pop();
		}

	}
	cout << cypher;
}
