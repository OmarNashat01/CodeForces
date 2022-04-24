#include <iostream>
using namespace std;


bool found;
void stamp(string word, string &target, int index)
{
	if (found)
		return;
	if (word == target)
	{
		found = true;
		return;
	}
	if (index >= word.size() -1)
		return;

	stamp(word, target, index+1);

	word[index] = 'B';
	word[index + 1] = 'R';

	stamp(word, target, index+1);

	word[index] = 'R';
	word[index + 1] = 'B';

	stamp(word, target, index+1);
}


int main()
{

	int n;
	cin >> n;

	int number;
	for (int i = 0 ; i < n; i++) {
		cin >> number;

		string arr;
		cin >> arr;

		string word = "";
		
		for (int j = 0; j < number; j++) {
			word = word+"W";
		}

		found = false;
		stamp(word, arr, 0);

		cout << (found ? "YES":"NO") <<endl;

	}

	return 0;
}
