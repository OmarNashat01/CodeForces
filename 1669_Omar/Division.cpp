/*****************************************************************************
* File:             Division.cpp
*                                                                            
* Author:           Omar Nashat
* Created:          Apr 23, 2022
* Description:      
*****************************************************************************/
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int number;
	for (int i = 0 ; i < n; i++) {
		cin >> number;

		int div = (number >= 1900) ? 1:
				  (number >= 1600) ? 2:
				  (number >= 1400) ? 3:4;

		cout << "Division " << div <<endl;
	}
	
	return 0;
}

