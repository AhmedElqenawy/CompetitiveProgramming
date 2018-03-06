#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
vector <long long>v2(10e5, 0);
int main()
{

	string a, x;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a.length() == 5)
			cout << 3 << endl;
		else
		{
			if ((a[0] == 'o'&&a[1] == 'n') || (a[0] == 'o' && a[2] == 'e') || (a[2] == 'e'&&a[1] == 'n'))
				cout << 1 << endl;
			else
				cout << 2 << endl;

		}
	}
	
//	system("pause");
}
